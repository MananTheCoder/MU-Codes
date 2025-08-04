#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
#define forn(i, n) for (int i = 0; i < n; i++)

// write a fn that takes a vector as input
// from the user and returns it.
vector<int> input_vi()
{
    int n;
    cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    return v;
}

void print_vi(vector<int> v)
{
    int n = v.size();
    // for (int i = 0; i < n; i++)
    forn(i, n)
    {
        cout << v[i] << "\t";
    }
    cout << "\n";
    v[0] = 10;
}

void rotate_vec(vi &v)
{
    int n = v.size();
    int temp = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        v[i + 1] = v[i];
    }
    v[0] = temp;
}

void solve()
{
    vector<int> v = input_vi();
    rotate_vec(v);
    print_vi(v);
}

int main()
{
    solve();
}