#include <iostream>
using namespace std;
int main()
{
    int n, a, b = 0, c, d = 0, i, j, m = 1, s = 1, sum = 0, mul = 1, r;
    cout << "enter a number ";
    cin >> n;
    for (i = n; i > 0; i /= 2)
    {
        c = i % 2;

        d = d + (c * m);
        m = m * 10;
    }
    cout << d << "\n";
    for (i = d; i > 0; i /= 10)
    {
        j = i % 10;
        if (j == 0)
        {
            a = 1;
        }
        else
        {
            a = 0;
        }
        b = b + (s * a);
        s = s * 10;
    }
    cout << b;
    for (i = b; i > 0; i /= 10)
    {
        r = i % 10;
        sum = sum + (r * mul);
        mul *= 2;
    }
    std::cout << "\n"
              << sum;
}