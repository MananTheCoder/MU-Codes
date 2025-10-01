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

void print_vi(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\t";
    }
    cout << "\n";
}

void reverse_vector(vector<int> &v)
{
    int n = v.size();
    int i = 0;
    while (i < n - 1 - i)
    {
        swap(v[i], v[n - 1 - i]);
        i++;
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    reverse_vector(v);
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