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

void playing_with_arrays()
{
    int size = 5;
    int a[size];

    for (int i = 0; i < size; i++)
    {
        a[i] = i + 1;
    }

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "\t";
    }
    cout << "\n";
}

void playing_with_vectors()
{
    vector<int> v(5);
    for (int i = 0; i < 5; i++)
    {
        v[i] = (i + 1);
    }
    v.push_back(6);
    print_vi(v);
    cout << v[0] << '\n';
    // cout << v.size() << "\n";
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << v[i] << "\t";
    // }
    // cout << "\n";
}

void solve()
{
    // playing_with_arrays();
    playing_with_vectors();
}

int main()
{
    solve();
}