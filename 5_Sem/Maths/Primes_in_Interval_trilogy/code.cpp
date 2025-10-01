#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;

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
}

void print_interval(vi &interval, int max_val)
{
    forn(i, max_val + 1)
    {
        if (interval[i])
        {
            cout << i << '\t';
        }
    }
    cout << "\n";
}

void prefix_sum(vi &v)
{
    forn(i, v.size() - 1)
    {
        v[i + 1] += v[i];
    }
}

int merge_intervals(vpii &queries, vi &interval)
{
    int max_val = INT_MIN;
    for (pii &query : queries)
    {
        interval[query.first] += 1;
        int r = query.second + 1, n = interval.size() - 1;
        if (r <= n)
        {
            interval[r] -= 1;
        }
        max_val = max(max_val, query.second);
    }
    prefix_sum(interval);
    return max_val;
}

void solve()
{
    int m;
    cin >> m;
    vpii queries(m);
    forn(i, m)
    {
        cin >> queries[i].first >> queries[i].second;
    }
    vi interval(100001);
    int max_val = merge_intervals(queries, interval);
    print_interval(interval, max_val);
}

int main()
{
    solve();
}