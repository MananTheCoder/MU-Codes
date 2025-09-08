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

void right_angled_left_aligned_isosceles_triangle(int &sides)
{
    for (int i = 0; i < sides; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void right_aligned_triangle(int &sides)
{
    for (int i = 0; i < sides; i++)
    {
        for (int j = 1; j < sides - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void centre_triangle(int &sides)
{
    for (int l = 1; l <= sides; l++)
    {
        for (int s = 1; s <= (sides - l); s++)
        {
            cout << " ";
        }
        for (int x = 1; x <= 2 * l - 1; x++)
        {
            cout << "*";
        }
        cout << '\n';
    }
}

void centre_smooth_triangle(int &sides)
{
    for (int l = 1; l <= sides; l++)
    {
        for (int s = 1; s <= sides - l; s++)
        {
            cout << " ";
        }
        cout << '*';
        for (int p = 1; p < l; p++)
        {
            cout << " *";
        }
        cout << "\n";
    }
}

void inverted_smooth_triangle(int sides)
{
    for (int l = sides; l >= 1; l--)
    {
        for (int s = 1; s <= sides - l; s++)
        {
            cout << " ";
        }
        for (int p = 1; p <= l; p++)
        {
            cout << " *";
        }
        cout << "\n";
    }
}

void diamond(int &sides)
{
    centre_smooth_triangle(sides);
    inverted_smooth_triangle(sides - 1);
}

void solve()
{
    int n;
    cin >> n;
    diamond(n);
    // centre_smooth_triangle(n);
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