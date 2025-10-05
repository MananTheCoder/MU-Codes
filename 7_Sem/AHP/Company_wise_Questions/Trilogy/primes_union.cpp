#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef pair<int, int> pii;
typedef vector<pii> vpii;

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

void prefix_merge_intervals(vi &merge_interval)
{
    forn(i, merge_interval.size() - 1)
    {
        merge_interval[i + 1] += merge_interval[i];
    }
}

int merge_intervals(vpii &queries, vi &merged_interval)
{
    int max_val = INT_MIN;
    forn(i, queries.size())
    {
        int l = queries[i].first, r = queries[i].second;
        merged_interval[l] += 1;
        if (r + 1 <= 1000000)
        {
            merged_interval[r + 1] -= 1;
        }
        max_val = max(max_val, r);
    }
    prefix_merge_intervals(merge_interval);
    return max_val;
}

void get_primes(vpii &queries)
{
    vi merged_interval(1000001, 0);
    int max_val = merge_intervals(queries, merged_interval);
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
    get_primes(queries);
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