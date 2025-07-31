#include <bits/stdc++.h>
using namespace std;

void printPlace(char c)
{
    // Ahmedabad, Surat, Junagadh
    switch (c)
    {
    case 'S':
        cout << "Welcome to Surat.\n";
        break;
    case 'A':
        cout << "Welcome to Ahmedabad.\n";
        break;
    case 'J':
        cout << "Welcome to Junagadh.\n";
        break;
    default:
        cout << "City not in the list.\n";
        break;
    }
}

void solve()
{
    char c;
    cin >> c;
    printPlace(c);
}

int main()
{
    solve();
}