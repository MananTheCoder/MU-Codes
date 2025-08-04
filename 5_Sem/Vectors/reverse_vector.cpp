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

void reverse_vector(vector<int> &v)
{
    // int i = 0, j = v.size() - 1;
    // while (i < j)
    // {
    //     swap(v[i++], v[j--]);
    // }

    for (int i = 0; i < v.size() / 2; i++)
    {
        swap(v[i], v[v.size() - 1 - i]);
    }
}

void solve()
{
    vector<int> v = input_vi();
    reverse_vector(v);
    print_vi(v);
}

int main()
{
    solve();
}