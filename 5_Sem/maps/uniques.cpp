#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef unordered_map<int, int> umii;

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

void print_set(set<int> &s)
{
    for (int x : s)
    {
        cout << x << "\t";
    }
    cout << "\n";
}

void fill_uniques(umii &freq_map, set<int> &uniques)
{
    for (pair<int, int> row : freq_map)
    {
        if (row.second == 1)
        {
            uniques.insert(row.first);
        }
    }
}

void get_uniques(vi &v, set<int> &uniques)
{
    umii freq_map;
    for (int &x : v)
    {
        freq_map[x]++;
    }
    fill_uniques(freq_map, uniques);
}

void solve()
{
    vi v = input_vi();
    set<int> uniques;
    get_uniques(v, uniques);
    print_set(uniques);
}

int main()
{
    solve();
}