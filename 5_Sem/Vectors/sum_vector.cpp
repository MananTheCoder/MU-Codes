#include <bits/stdc++.h>
using namespace std;

// write a fn that takes a vector as input
// from the user and returns it.
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

int sum_vector(vector<int> &v)
{
    int sum = 0;
    for (int x : v)
    {
        sum += x;
    }
    return sum;
}

void solve()
{
    vector<int> v = input_vi();
    cout << sum_vector(v) << "\n";
    print_vi(v);
}

int main()
{
    solve();
}