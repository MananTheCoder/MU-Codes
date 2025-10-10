#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
// typedef vector<long long> vll;
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

bool isPrime_backup(long long n)
{
    if (n < 2)
    {
        return false;
    }
    if (n < 4)
    {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }
    for (int i = 5; i <= n / i; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

bool isPrime(long long n, set<int> &primes) // O(P)
{
    if (primes.find(n) != primes.end()) // logP
    {
        return true;
    }
    for (int p : primes)
    {
        if (p > n / p)
        {
            break;
        }
        if (n % p == 0)
        {
            return false;
        }
    }
    return true;
}

void print_consecutive_sums(unordered_set<long long> &consecutive_sums)
{
    for (int x : consecutive_sums)
    {
        cout << x << "\t";
    }
    cout << "\n";
}

void fill_sieve(vi &sieve)
{
    int n = sieve.size() - 1;
    sieve[0] = sieve[1] = 0;
    for (int i = 2; i <= n / i; i++)
    {
        if (sieve[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                sieve[j] = 0;
            }
        }
    }
}

void fill_primes(vi &sieve, set<int> &primes)
{
    forn(i, sieve.size())
    {
        if (sieve[i])
        {
            primes.insert(i);
        }
    }
}

void fill_consecutive_sums(unordered_set<long long> &consecutive_sums, set<int> &primes)
{
    long long sum = 0;
    for (int p : primes)
    {
        sum += p;
        consecutive_sums.insert(sum);
    }
}

int total_count(unordered_set<long long> &consecutive_sums, vi &sieve, set<int> &primes, int limit)
{
    int count = 0;
    for (int i = 3; i <= limit; i++)
    {
        bool cond1 = (i < sieve.size() && sieve[i]); // the primes lies in sieve;
        bool cond2 = isPrime(i, primes);             // O(sqrt(i))             // isPrime otherwise
        bool cond_prime = cond1 || cond2;
        bool cond_check_sum = consecutive_sums.find(i) != consecutive_sums.end();
        if (cond_prime && cond_check_sum)
        {
            count++;
        }
    }
    // cout << "\n";
    return count;
}

int get_total_count(set<int> primes, long long n) // P^2
{
    long long sum = 0;
    bool threshold_crossed = false;
    int count = 0, count2 = 0;
    for (int p : primes) // P
    {
        sum += p;
        if (sum == 2)
        {
            continue;
        }
        if (sum > n)
        {
            break;
        }
        if (isPrime(sum, primes)) // O(P)
        {
            count++;
        }
    }
    cout << sum << '\n';
    // cout << count2 << "\n";
    return count;
}

void solve()
{
    long long n;
    cin >> n;
    int limit = 10 * sqrt(n);
    vi sieve(limit, 1);
    fill_sieve(sieve); // O(L*lglg(L) )
    set<int> primes;
    fill_primes(sieve, primes);                 // O(Llg(L))
    cout << get_total_count(primes, n) << "\n"; // P^2
    // unordered_set<long long> consecutive_sums;
    // fill_consecutive_sums(consecutive_sums, primes); // O(P)
    // cout << total_count(consecutive_sums, sieve, primes, limit) << "\n"; // O(L^1.5)
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