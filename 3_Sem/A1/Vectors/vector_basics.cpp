#include <bits/stdc++.h>
using namespace std;

void arrays()
{
    int n = 5;
    int a[n];
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}

int find_vector_sum(vector<int> &v)
{
    int sum = 0, n = v.size();
    v[0] = 9;
    // for (int i = 0; i < n; i++)
    // {
    //     sum += v[i];
    // }
    return sum;
}

void vectors()
{
    // STL -> Standard Template Library
    int n = 5;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> v[i];
    }
    int x = find_vector_sum(v);
    cout << v[0] << "\n";
    // cout << find_vector_sum(v) << "\n";
}

void solve()
{
    vectors();
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