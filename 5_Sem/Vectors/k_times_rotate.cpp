#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
#define forn(i, n) for (int i = 0; i < n; i++)

// write a fn that takes a vector as input
// from the user and returns it.
vector<int> input_vi()
{
    int n;
    cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    return v;
}

void print_vi(vector<int> v)
{
    int n = v.size();
    // for (int i = 0; i < n; i++)
    forn(i, n)
    {
        cout << v[i] << "\t";
    }
    cout << "\n";
    v[0] = 10;
}

void rotate_vec(vi &v) // O(n)
{
    int n = v.size(); //
    int temp = v[n - 1];
    for (int i = n - 2; i >= 0; i--) // O(n-1) ~ O(n)
    {
        v[i + 1] = v[i];
    }
    v[0] = temp; // 1
}

void rotate_k_times(vi &v, int k) // O(kn)
{
    k %= v.size();
    while (k--) // k * n = kn
    {
        rotate_vec(v); // O(n)
    }
}

void rotate_k_times_faster_cw(vi &v, int k) // TC: O(n+k), SC: O(k)
{
    int n = v.size();
    k %= n;
    // take backup of last k elem.
    // vi backup(v.begin() + (n - k), v.end());
    vi backup(k);
    for (int i = (n - k); i < n; i++) // k
    {
        backup[i - (n - k)] = v[i];
    }

    // shift first (n-k) elem k place forward
    for (int i = n - k - 1; i >= 0; i--) // (n-k)
    {
        v[i + k] = v[i];
    }

    // insert the backup k elem at front.
    forn(i, k) // k
    {
        v[i] = backup[i];
    }
}

void rotate_k_times_faster_acw(vi &v, int k)
{
    // take backup of front k elements

    // shift last (n-k) elem k place backward

    // insert the backup k elems at back
}

void rotate_k_times_hybrid(vi &v, int k)
{
    int n = v.size();
    k %= n;
    if (k > n - k)
    {
        rotate_k_times_faster_cw(v, k);
        return;
    }
    rotate_k_times_faster_acw(v, n - k);
}

void rotate_k_times_fastest(vi &v, int k)
{
    k %= v.size();
    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin() + k);
    reverse(v.begin() + k, v.end());
}

void solve()
{
    vector<int> v = input_vi();
    int k;
    cin >> k;
    rotate_k_times_fastest(v, k);
    print_vi(v);
}

int main()
{
    solve();
}