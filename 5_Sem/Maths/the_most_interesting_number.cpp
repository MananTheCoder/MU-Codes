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

int reverse(int n) // O(log n)
{
    int new_n = 0;
    while (n)
    {
        new_n = (new_n * 10) + n % 10;
        n /= 10;
    }
    return new_n;
}

bool isPrime_flash(long long n) // O(sqrt(n)/2)
{
    if (n < 2)
    {
        return false;
    }
    int counter = 0;
    bool ans = true;
    if (n == 2)
    {
        return true;
    }
    if (n % 2 == 0)
    {
        return false;
    }
    for (int i = 3; i <= n / i; i += 2)
    {
        counter++;
        if (n % i == 0)
        {
            ans = false;
            break;
            // return false;
        }
    }
    // cout << counter << "\n";
    return ans;
}

int find_rank(int p) // O(p^1.5), k = 1/2
{
    int rank = 0; // 1
    forn(i, p)    // p * sqrt(p)/2
    {
        if (isPrime_flash(i + 1)) // (sqrt(i)/2)
        {
            rank++; // 1
        }
    }
    return rank; // 1
}

bool is_interesting(int p1) // O(p1^1.5)
{
    if (!isPrime_flash(p1)) // sqrt(p1)/2
    {
        return false;
    }
    int p2 = reverse(p1);   // log(p1)
    if (!isPrime_flash(p2)) // sqrt(p2)/2
    {
        return false;
    }
    int r2 = find_rank(p2);   // (p2^1.5)/2
    int r1 = reverse(r2);     // log(r2)
    int rank = find_rank(p1); // (p1^1.5)/2
    return r1 == rank;
}

void print_interesting_list(int range) // range^2.5
{
    forn(i, range) // range
    {
        if (is_interesting(i + 1)) // x^1.5 <= range^1.5
        {
            cout << (i + 1) << "\t";
        }
    }
    cout << "\n";
}

void solve()
{
    int range;
    cin >> range;
    print_interesting_list(range);
}

int main()
{
    solve();
}