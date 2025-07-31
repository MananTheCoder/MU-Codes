#include <bits/stdc++.h>
using namespace std;

bool isPrime(long n)
{
    int count = 0;
    if (n < 2)
    {
        return false;
    }
    if (n == 2)
    {
        return true;
    }
    if (n % 2 == 0)
    {
        return false;
    }
    for (int i = 3; i < n; i += 2)
    // for (int i = 2; i < n; i++)
    {
        count++;
        if (n % i == 0)
        {
            return false;
        }
    }
    cout << count << "\n";
    return true;
}

bool isPrimeOptimised(int n)
{
    int count = 0;
    if (n < 2)
    {
        return false;
    }
    if (n == 2)
    {
        return true;
    }
    if (n % 2 == 0)
    {
        return false;
    }
    for (int i = 3; i < sqrt(n); i += 2)
    {
        count++;
        if (n % i == 0)
        {
            return false;
        }
    }
    cout << count << "\n";
    return true;
}

void solve()
{
    long n;
    cin >> n;
    cout << isPrimeOptimised(n) << "\n";
}

int main()
{
    solve();
}