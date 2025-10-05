#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef pair<int, int> pii;

#define forn(i, n) for (int i = 0; i < n; i++)
#define pb push_back

vi input_vector()
{
    int n;
    cin >> n;
    vi v(n);
    forn(i, n)
    {
        cin >> v[i];
    }
    return v;
}

void print_vec(vi &v)
{
    forn(i, v.size())
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}

int reverse(int n) // log10(n)
{
    int ans = 0;
    while (n)
    {
        ans = ans * 10 + n % 10;
        n /= 10;
    }
    return ans;
}

bool primality_test(int n) // O(sqrt(n)/3)
{
    if (n < 2)
    {
        return false;
    }
    if (n < 4)
    {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }
    for (int i = 5; i <= (n / i); i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

int get_rank(int p) // O(p^1.5) / 3
{
    int rank = 0;
    forn(i, p + 1) // p * sqrt(i)/2
    {
        if (primality_test(i)) // sqrt(i)/3 <= sqrt(p)/3
        {
            rank++;
            // primes[i] = rank;
        }
    }
    return rank;
}

pair<int, int> satisfies_conditions(int p1) // O(p^1.5), k= 2/3
{
    if (!primality_test(p1)) // sqrt(p1)/3
    {
        return {-1, -1};
    }
    int p2 = reverse(p1);    // log10(p1)
    if (!primality_test(p2)) // O(sqrt(p2))/3
    {
        return {-1, -1};
    }
    int r1 = get_rank(p1); // O(p1^1.5)/3
    int r2 = reverse(r1);  // O(log10(r1))
    if (r1 == r2)
    {
        return {-1, -1};
    }
    if (r2 == get_rank(p2) && p1 > p2) // O(p2^1.5)/3
    {
        return {p1, p2};
    }
    return {-1, -1};
}

void print_all_interesting_numbers(int &range) // O(range^2.5), k=2/3
{
    for (int p1 = 1; p1 <= range; p1++) // range *
    {
        pii pair1 = satisfies_conditions(p1); // O(p1^1.5), k = 2/3 <= range^1.5, k = 2/3
        if (pair1.first != -1)
        {
            cout << pair1.first << "\t" << pair1.second << "\n"; // will print duplicate answers, remove duplication
        }
    }
}

void solve()
{
    // avoid duplication in values and print the larger number.
    int n;
    cin >> n;
    print_all_interesting_numbers(n);
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}