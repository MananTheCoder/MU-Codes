#include <bits/stdc++.h>
using namespace std;

void arrays()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max_elem = a[0]; // a[i]
    for (int i = 1; i < n; i++)
    {
        // if (a[i] > max_elem)
        // {
        //     max_elem = a[i];
        // }
        max_elem = max(max_elem, a[i]);
    }
    cout << "Max elem: " << max_elem << "\n";
}

void vectors()
{
    int n;
    cin >> n;
    // STL -> Standard Template Library
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int max_elem = v[0]; // a[i]
    for (int i = 1; i < n; i++)
    {
        // if (a[i] > max_elem)
        // {
        //     max_elem = a[i];
        // }
        max_elem = max(max_elem, v[i]);
    }
    cout << "Max elem: " << max_elem << "\n";
}

void solve()
{
    // arrays();
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