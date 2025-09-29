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

void solve()
{
    unordered_set<int> dates({1, 4, 9, 16, 25});
    unordered_set<int> months({1, 4, 9});
    unordered_set<int> years({1, 4, 9, 16, 25, 36, 49, 64, 81});
    for (int dd : dates)
    {
        for (int mm : months)
        {
            int yy = dd + mm;
            if (years.find(yy) != years.end())
            {
                cout << dd << "/" << mm << "/" << yy << "\n";
            }
        }
    }
}

int main()
{
    solve();
}