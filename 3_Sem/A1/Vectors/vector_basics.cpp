#include <bits/stdc++.h>
using namespace std;

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

void print_vi(vector<int> &v)
{
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << "\n";
}

void rotate_vector(vector<int> &v)
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
    rotate_vector(v);
    print_vi(v);
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