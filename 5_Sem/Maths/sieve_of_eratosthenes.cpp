#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<bool> vb;

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

void remove_composite_numbers(vb &primes)
{
    int range = primes.size() - 1;
    for (int i = 2; i <= range / i; i++)
    {
        if (primes[i] == false)
        {
            continue;
        }
        // remove all multiples of i
        for (int m = i * i; m <= range; m += i)
        {
            primes[m] = false;
        }
    }
}

void print_sieve(int &range)
{
    vb primes(range + 1, true);
    primes[0] = primes[1] = false;
    remove_composite_numbers(primes);
    for (int i = 2; i <= range; i++)
    {
        if (primes[i] == true)
        {
            cout << i << " ";
        }
    }
    cout << "\n";
}

void solve()
{
    int range;
    cin >> range;
    print_sieve(range);
}

int main()
{
    solve();
}