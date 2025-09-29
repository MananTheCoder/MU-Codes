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

void print_set(set<int> &s)
{
    for (const int &x : s)
    {
        cout << x << "\t";
    }
    cout << "\n";
}

void find_intersection(vi &a, vi &b, set<int> &common)
{
    unordered_map<int, bool> presence;
    for (int x : a)
    {
        presence[x] = true;
    }
    for (int x : b)
    {
        if (presence[x])
        {
            common.insert(x);
        }
    }
}

void solve()
{
    vi a = input_vi();
    vi b = input_vi();
    set<int> common;
    find_intersection(a, b, common);
    print_set(common);
}

int main()
{
    solve();
}