#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<double, int> pdi;
typedef vector<pdi> vpdi;

#define forn(i, n) for (int i = 0; i < n; i++)

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

double vedic_sqrt(int n) // log(n)
{
    int x = sqrt(n);
    int diff = n - x * x;
    return x + diff / (2.0 * x);
}

double perc_diff(double ori, double mod)
{
    return abs(mod - ori) * 100 / ori;
}

void list_desc_deviations(int range) // 3* rlog(r)
{
    vpdi list;
    forn(i, range) // range * log(range), k=2
    {
        double my_sqrt = vedic_sqrt(i + 1); // log(n)
        double ans = sqrt(i + 1);           // log(n)
        double dev = perc_diff(ans, my_sqrt);
        list.push_back(make_pair(dev, (i + 1)));
    }
    sort(list.begin(), list.end(), greater<pdi>()); // range log(range)
    forn(i, 10)
    {
        cout << list[i].second << ":\t" << list[i].first << "\n";
    }
}

void print_list(int range)
{
    forn(i, range)
    {
        double my_sqrt = vedic_sqrt(i + 1); // log(n)
        double ans = sqrt(i + 1);           // log(n)
        cout << (i + 1) << ": \t" << perc_diff(ans, my_sqrt) << "\n";
    }
}

void solve()
{
    int n;
    cin >> n;
    // print_list(n);
    list_desc_deviations(n);
}

int main()
{
    solve();
}