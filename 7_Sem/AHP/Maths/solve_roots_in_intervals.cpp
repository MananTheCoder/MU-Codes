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

void take_input(vi &coeffs, vi &range)
{
    forn(i, coeffs.size())
    {
        cin >> coeffs[i];
    }
    forn(i, range.size())
    {
        cin >> range[i];
    }
}

double get_val(double root, vi &coeffs)
{
    int n = coeffs.size() - 1;
    double mult = 1;
    double sum = 0;
    for (int i = n; i >= 0; i--)
    {
        sum += mult * coeffs[i];
        mult *= root;
    }
    return sum;
}

double find_dev(double a, double b)
{
    double num = (a - b);
    double den = min(abs(a), abs(b));
    return abs(num / den) * 100;
}

double find_root(double a, double b, vi &coeffs, double threshold = 1) // threshold in percentage
{
    if (double dev = find_dev(a, b) < threshold)
    {
        return (a + b) / 2;
    }

    double v1 = get_val(a, coeffs);
    double v2 = get_val(b, coeffs);
    double v3 = get_val((a + b) / 2, coeffs);
    // cout << v1 << "\t" << v3 << "\t" << v2 << "\n";

    if (v3 == 0)
    {
        return (a + b) / 2;
    }

    bool pos1 = (v1 > 0), pos2 = (v2 > 0), pos3 = (v3 > 0);

    if (pos1 != pos3)
    {
        return find_root(a, (a + b) / 2, coeffs, threshold);
    }
    return find_root(b, (a + b) / 2, coeffs, threshold);
}

void solve()
{
    int n;
    double threshold;
    cin >> n >> threshold;
    vi coeffs(n + 1), range(n + 1);
    take_input(coeffs, range);
    forn(i, n)
    {
        double root = find_root(range[i], range[i + 1], coeffs, threshold);
        cout << root << "\t";
    }
    cout << "\n";
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