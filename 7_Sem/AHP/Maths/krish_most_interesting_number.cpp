#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

typedef vector<int> vi;

void sieve(int n, vi &res) // O(nlglgn + n)
{
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;

    for (int p = 2; p <= n / p; p++) // nlglgn
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
            {
                prime[i] = false;
            }
        }
    }

    res.push_back(0);
    for (int p = 2; p <= n; p++) // n
    {
        if (prime[p])
        {
            res.push_back(p);
        }
    }
}
int reverse_num(int num) // log10(n)
{
    int rev_num = 0;
    while (num > 0)
    {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> prime;
    sieve(n, prime); // O{n(lglgn + 1)}

    int total = prime.size();

    // cout << "total : " << total << endl;
    int count = 0;

    for (int r1 = 12; r1 < total; r1++) // p *
    {
        int r2 = reverse_num(r1); // log10(r1)
        if (r2 > total || r1 == r2)
        {
            continue;
        }
        int p1 = prime[r1];
        int p2 = prime[r2];
        if (p1 == reverse_num(p2) && p1 > p2) // log10(p2)
        {
            cout << r1 << " : " << p1 << endl;
            count++;
        }
    }
}

int main()
{
    solve();
}
