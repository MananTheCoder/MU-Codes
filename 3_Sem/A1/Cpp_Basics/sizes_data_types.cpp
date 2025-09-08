#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // cout << sizeof(long) << "\t" << sizeof(long long) << "\n";
    int a = (int)pow(2, 32) - 1;
    long b = pow(2, 32);

    cout << (a == b) << "\n";
}

int main()
{
    solve();
}