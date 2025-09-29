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

void distincts(vi &v)
{
    sort(v.begin(), v.end());
    int j = 0;
    for (int i = 1; i < v.size() - 1; i++)
    {
        if (v[i] != v[j])
        {
            j++;
            v[j] = v[i];
        }
        cout << j << ": ";
        print_vi(v);
    }
    v.resize(j + 1);
}

void solve()
{
    vi v = input_vi();
    distincts(v);
    print_vi(v);
}

int main()
{
    solve();
}