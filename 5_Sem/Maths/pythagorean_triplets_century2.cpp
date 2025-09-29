#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

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

void fill_years(unordered_set<int> &years)
{
    forn(i, 33)
    {
        years.insert((i + 1) * (i + 1));
    }
}

void solve()
{
    // handle the edge cases
    unordered_set<int> dates;  // 1 -> 31
    unordered_set<int> months; // 1 -> 12
    unordered_set<int> years;  // 1 -> 33
    fill_years(years);
    int count = 0;
    for (int dd = 1; dd <= 31; dd++)
    {
        for (int mm = 1; mm <= 12; mm++)
        {
            int yy_2 = dd * dd + mm * mm;
            if (years.find(yy_2) != years.end())
            {
                count++;
                cout << dd << "/" << mm << "/" << sqrt(yy_2) << "\n";
            }
        }
    }
    cout << count << "\n";
}

int main()
{
    solve();
}