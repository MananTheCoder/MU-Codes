#include <bits/stdc++.h>
using namespace std;

int get_no_of_digits(int n)
{
    int count = 0;
    while (n > 0)
    {
        count++;
        n /= 10;
    }
    return count;
}

bool isArmstrong(int n)
{
    int sum = 0, n_copy = n;
    int no_of_digits = get_no_of_digits(n);

    while (n > 0)
    {
        int digit = n % 10;
        sum += pow(digit, no_of_digits);
        n /= 10;
    }
    if (sum == n_copy)
    {
        return true;
    }
    return false;
}

void list_armstrong(int range)
{
    int count = 0;
    for (int i = 1; i <= range; i++)
    {
        if (isArmstrong(i))
        {
            count++;
            cout << i << "\t";
        }
    }
    cout << "\n";
    cout << count << "\n";
}

void playground()
{
    int range;
    cin >> range;

    // cout << isArmstrong(n) << "\n"; // T/F
    list_armstrong(range);
}

int main()
{
    playground();
}