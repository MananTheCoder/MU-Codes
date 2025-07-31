#include <iostream>
#include <math.h>
using namespace std;

int get_no_of_digits(int n)
{
    int no_of_digits = 0;
    while (n > 0)
    {
        no_of_digits++;
        n /= 10;
    }
    return no_of_digits;
}

bool isArmstrong(int n)
{
    int sum = 0, n_copy = n;
    int no_of_digits = get_no_of_digits(n);
    while (n > 0)
    {
        int digit = n % 10;
        sum += pow(digit, no_of_digits);
        n /= 10; // n = n/ 10
    }

    if (sum == n_copy)
    {
        return true;
    }
    return false;
}

void listArmstrong(int range)
{
    int count = 0;
    for (int i = 1; i <= range; i++)
    {
        if (isArmstrong(i) == true)
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
    listArmstrong(n);
}

int main()
{
    solve();
}
