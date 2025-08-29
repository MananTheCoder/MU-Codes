#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef pair<int, int> pii;

#define forn(i, n) for (int i = 0; i < n; i++)
#define pb push_back

vi input_vector()
{
    int n;
    cin >> n;
    vi v(n);
    forn(i, n)
    {
        cin >> v[i];
    }
    return v;
}

void print_vec(vi &v)
{
    forn(i, v.size())
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}

bool isEven(int n) // o-> 0, e->1
{
    return ~(n & 1);
    // n&1 -> 1: odd, even -> 0
    // ~1 = -2, ~0->
    // power of 2
    // if (n & 1 == 0)
    // {
    //     return true;
    // }
    // return false;
    // else
    // {
    //     return false;
    // }
}

void solve()
{
    int n;
    cin >> n;
    cout << isEven(n) << "\n";
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