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

long reverse(int n)
{
    int rev = 0;
    while (n > 0)
    {
        int digit = n % 10;
        rev = (rev * 10) + digit;
        n /= 10;
    }
    return rev;
}

bool isPalindrome(int n)
{
    long int rev = reverse(n);
    if (rev == n)
    {
        return true;
    }
    return false;
}

void playground()
{
    int n;
    cin >> n;

    cout << isPalindrome(n) << "\n"; // T/F
    // list_armstrong(range);
    // int a = 1023456789;
    // long int b = 9876543201;
    // cout << a << "\t" << b << "\n";
}

int main()
{
    playground();
}