#include <bits/stdc++.h>
using namespace std;

bool isPrime_slowest(int n)
{
    if (n < 2)
    {
        return false;
    }
    int counter = 0;
    bool ans = true;
    for (int i = 2; i < n; i++)
    {
        counter++;
        if (n % i == 0)
        {
            ans = false;
            break;
            // return false;
        }
    }
    cout << counter << "\n";
    return ans;
}

bool isPrime_slower(int n)
{
    if (n < 2)
    {
        return false;
    }
    int counter = 0;
    bool ans = true;
    for (int i = 2; i <= n / 2; i++)
    {
        counter++;
        if (n % i == 0)
        {
            ans = false;
            break;
            // return false;
        }
    }
    cout << counter << "\n";
    return ans;
}

bool isPrime_faster(int n)
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
    for (int i = 3; i <= n / 2; i += 2)
    {
        counter++;
        if (n % i == 0)
        {
            ans = false;
            break;
            // return false;
        }
    }
    cout << counter << "\n";
    return ans;
}

bool isPrime_flash(long long n)
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
    cout << counter << "\n";
    return ans;
}

void solve()
{
    long long n;
    cin >> n;
    cout << (isPrime_flash(n) ? "Prime" : "Composite") << "\n";
}

int main()
{
    solve();
}