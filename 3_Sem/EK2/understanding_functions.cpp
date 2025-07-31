#include <iostream>
using namespace std;

void sum(int a, int b)
{
    int c = a + b;
    cout << c << "\n";
}

int main()
{
    // int a = 2, b = 3;
    // int c = a + b;
    // cout << c << "\n";
    sum(2, 3);

    // int d = 5, e = 7;
    // int f = d + e;
    // cout << f << "\n";
    sum(5, 7);
    sum(9, 9);
    sum(12, 13);
}
