#include <bits/stdc++.h>
using namespace std;

void find_hcf_lcm(int a, int b)
{
    int hcf = __gcd(a, b);
    int _lcm = lcm(a, b);
    cout << hcf << '\t' << _lcm << "\n";
}

void playground()
{
    int a, b;
    cin >> a >> b;
    find_hcf_lcm(a, b);
}

int main()
{
    playground();
}