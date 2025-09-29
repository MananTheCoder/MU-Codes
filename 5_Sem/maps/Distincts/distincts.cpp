#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

#define forn(i, n) for (int i = 0; i < n; i++)

vector<int> input_vi()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    return v;
}

void print_vi(vector<int> v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << "\t";
    }
    cout << "\n";
    v[0] = 10;
}

int count_of_distincts_freq_map(vi &v) // TC: O(n), SC: O(n), k=2
{
    unordered_map<int, int> freq_map;
    for (int &x : v)
    {
        freq_map[x]++;
    }
    return freq_map.size();
}

int count_of_distincts(vi &v) // TC: O(n), SC: O(n), k=1
{
    unordered_set<int> uniques;
    for (int &x : v)
    {
        uniques.insert(x);
    }
    return uniques.size();
}

void solve()
{
    vi v = input_vi();
    int count = count_of_distincts(v);
    cout << count << "\n";
}

int main()
{
    solve();
}