#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef unordered_map<char, int> umci;
typedef pair<const char, int> pci;
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

void single_loop_of_map(umci &freq_map, string &ans)
{
    vector<char> chars_to_remove;
    for (pair<const char, int> &row : freq_map)
    {
        ans += row.first;
        row.second--;
        if (row.second == 0)
        {
            chars_to_remove.push_back(row.first);
        }
    }
    for (char &c : chars_to_remove)
    {
        freq_map.erase(c);
    }
}

string insert_missing_char(string &ans, char c, int k)
{
    // insert at beginning
    if (ans[0] != c)
    {
        ans = c + ans;
        k--;
    }

    // insert in middle
    for (int i = 0; k && i < ans.length() - 1; i += 2)
    {
        if (ans[i] != c && ans[i + 1] != c)
        {
            ans = ans.substr(0, i + 1) + c + ans.substr(i + 1);
            k--;
        }
        else if (ans[i] == c)
        {
            i--;
        }
    }
    // insert in end
    if (k > 0 && ans[ans.length() - 1] != c)
    {
        ans += c;
    }

    return ans;
}

string rearrangement(umci &freq_map)
{
    string ans = "";
    while (freq_map.size() > 1)
    {
        single_loop_of_map(freq_map, ans);
    }
    if (freq_map.size() == 0)
    {
        return ans;
    }
    char c = freq_map.begin()->first;
    int k = freq_map.begin()->second;
    return insert_missing_char(ans, c, k);
}

string distinct_adjacents(string &s) // O(n), k >= 30
{
    umci freq_map;
    // aaaabbc
    int max_freq = 0, n = s.length();
    for (char &c : s)
    {
        freq_map[c]++;
        max_freq = max(max_freq, freq_map[c]);
    }

    if (max_freq > (n + 1) / 2)
    {
        return "";
    }

    return rearrangement(freq_map);
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