#include <iostream>
#include <vector>
using namespace std;

void reverse_vector(vector<int> &v)
{
    int l = 0, r = v.size() - 1;
    while (l < r)
    {
        swap(v[l], v[r]);
        l++;
        r--;
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
}

int main()
{
    solve();
}
