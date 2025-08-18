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

void get_prefix_vector(vi &v, vi &prefix) // tc: O(n), k=1; SC: O(n), k=1
{
    prefix[0] = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        prefix[i] = prefix[i - 1] + v[i];
    }
}

void prefix_in_place(vi &v)
{
    for (int i = 1; i < v.size(); i++)
    {
        v[i] += v[i - 1];
    }
}

void get_original_vector(vi &v, vi &prefix)
{
    //
}

void original(vi &prefix)
{
    //
}

void solve()
{
    vi v = input_vi();
    // vi prefix(v.size(), 0);
    // get_prefix_vector(v, prefix);
    // print_vi(prefix);
    prefix_in_place(v);
    print_vi(v);
}

int main()
{
    solve();
}