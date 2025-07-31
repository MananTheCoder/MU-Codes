#include <bits/stdc++.h>
using namespace std;

int count_digits(int n) // O(log(n))
{
    int count = 0; // 1
    while (n > 0)  // 1 * d = O(d)
    {
        count++;
        n /= 10;
    }
    return count; // 1
}

bool isArmstrong(int n) // log(n) * 2
{
    int n_copy = n, sum = 0;
    int no_digits = count_digits(n); // log(n)
    while (n > 0)                    // log(n)
    {
        int digit = n % 10;
        sum += pow(digit, no_digits);
        n /= 10;
    }
    return (sum == n_copy);
}

void print_all_armstrong(int range) // 2* R*log(R)
{
    int count = 0;
    for (int i = 1; i <= range; i++) // range *  2log(i) = 2* range* log(i)
    {
        if (isArmstrong(i)) //  2log(i)
        {
            count++;
            cout << i << "\t";
        }
    }
    cout << "\n";
    cout << count << "\n";
}

void solve()
{
    int n;
    cin >> n;
    // cout << isArmstrong(n) << "\n";
    print_all_armstrong(n);
}

int main()
{
    solve();
}