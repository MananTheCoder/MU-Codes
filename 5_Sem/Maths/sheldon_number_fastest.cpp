#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef unordered_map<int, int> umii;

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

bool isPrime(long long n) // O(sqrt(n)/2)
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

void fill_ranks(umii &prime_ranks, int &range) // (range^1.5)/2
{
    int rank = 1;
    for (int i = 2; i <= range; i++) // range * sqrt(range)/2 = range^(1.5)/2
    {
        if (isPrime(i)) // sqrt(range)/2
        {
            prime_ranks[i] = rank++;
        }
    }
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

bool is_interesting(int p1, umii &prime_ranks) // sqrt(p1)
{                                              //
    if (!isPrime(p1))                          // sqrt(p1)/2
    {
        return false;
    }
    int p2 = reverse(p1); // log(p1)
    if (p1 == p2)
    {
        return false;
    }
    if (!isPrime(p2)) // sqrt(p2)/2
    {
        return false;
    }
    int r2 = prime_ranks[p2];
    int r1 = reverse(r2); // log(r2)
    int rank = prime_ranks[p1];

    return (r1 == rank) && (p1 > p2);
}

void print_interesting_list(int range, umii &prime_ranks) // range^(1.5)
{
    forn(i, range) // range * sqrt(range)
    {
        if (is_interesting(i + 1, prime_ranks)) // sqrt(i)
        {
            cout << (i + 1) << "\t";
        }
    }
    cout << "\n";
}

void the_best_number(int &range) // range^(1.5), k=1.5
{
    unordered_map<int, int> prime_ranks;
    fill_ranks(prime_ranks, range);             // x/2
    print_interesting_list(range, prime_ranks); // x
}

void solve()
{
    int range;
    cin >> range;
    the_best_number(range);
}

int main()
{
    solve();
}