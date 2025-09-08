#include <bits/stdc++.h>
using namespace std;

int BasicDataType(string s)
{
    if (!isdigit(s[0]) && s[0] != '.')
    {
        return sizeof(char);
    }
    if (s.find('.') == string::npos)
    {
        return sizeof(int);
    }
    int decimal_pos = s.find('.');
    int floating_precision = s.length() - decimal_pos - 1;
    if (floating_precision < 6)
    {
        return sizeof(float);
    }
    return sizeof(double);
}

void ranges()
{
    // int a = 2147483648;
    // cout << (a ==) << '\n';
    int b = 2147483648;
    cout << (b == INT_MIN) << "\n";
    // cout << b << "\n";
}

void long_long_ranges()
{
    long long a = INT64_MAX;
    long long b = INT64_MIN;
    // cout << (b == (long long)-9223372036854775808) << "\n";
    // unsigned int c = UINT;
    // cout << (c) << "\n";
}

void solve()
{
    // string s;
    // cin >> s;
    // cout << BasicDataType(s) << "\n";
    // ranges();
    long_long_ranges();
}

int main()
{
    solve();
}