#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef pair<int, int> pii;

#define forn(i, n) for (int i = 0; i < n; i++)
#define pb push_back

vi input_vector()
{
    int n;
    cin >> n;
    vi v(n);
    forn(i, n)
    {
        cin >> v[i];
    }
    return v;
}

void print_vec(vi &v)
{
    forn(i, v.size())
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}

char get_most_freq_char(vi &freqs, char c) // O(1), k > 26
{
    // return the char with highest freq freqs vi
    // that is not eq to c
    int max_freq = 0;
    char max_freq_c;
    forn(i, freqs.size())
    {
        if ((i + 'a') != c && freqs[i] >= max_freq)
        {
            max_freq = freqs[i];
            max_freq_c = i + 'a';
        }
    }
    return max_freq_c;
}

string distinct_adjacents(string &s) // O(n), k >= 30
{
    vector<int> freqs(26, 0);
    for (char &c : s) // O(n), k=1
    {
        freqs[c - 'a']++;
    }
    string ans = "";
    char most_freq_c = '0';
    forn(i, s.length()) // O(n), k > 28
    {
        most_freq_c = get_most_freq_char(freqs, most_freq_c); // O(1), k > 26
        ans += most_freq_c;
        freqs[most_freq_c - 'a']--;
    }
    return ans;
}

void solve()
{
    string s;
    cin >> s;
    cout << distinct_adjacents(s) << "\n";
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}