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

void solve()
{
}
class Shapes
{

public:
    float Area(float len, float bre)
    {
        return len * bre;
    }
    float Area(float radi)
    {
        return 3.14 * (radi * radi);
    }
    int Area(int len)
    {
        return len * len;
    }
};

int main()
{
    Shapes S1;
    S1.Area(5);
    return 0;
}