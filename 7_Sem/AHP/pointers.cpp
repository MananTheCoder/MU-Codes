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

void pointers_for_arrays()
{
    int a[10];
    int x = 0;
    forn(i, 10)
    {
        a[i] = i + 11;
    }
    int *ptr_a = &(a[0]);
    // int *ptr_b = &a[9];

    // ptr+= x -> (type)ptr * x;
    // int *ptr_c = &a[2];
    // cout << ptr_a << "\n";
    // cout << ptr_b << "\n";
    // cout << ptr_c << "\n";

    // pointer arithmetic
    int *ptr_b = &a[9];
    ptr_b -= 4;

    cout << *(ptr_a + x) << "\t" << a[x] << "\n";

    (*ptr_a)++;
}

void loop_on_array()
{
    int a[10];
    int x = 0;
    forn(i, 10)
    {
        a[i] = i + 1;
    }

    // print the array using pointers
    int *ptr_a = a;
    forn(i, 10)
    {
        cout << (*ptr_a) << "\t";
        ptr_a++;
    }
    cout << "\n";
}

void array_of_pointers()
{
    int a[10];
    forn(i, 10)
    {
        a[i] = i + 1;
    }

    int *ptrs[10];
    forn(i, 10)
    {
        ptrs[i] = &a[i];
        cout << ptrs[i] << "\t";
    }
    cout << "\n";
}

void pointer_incrementals()
{
    int a = 4;
    int b = 16;
    // string c;
    int c[10];
    int d = 10;
    int *ptr_a = &a;
    int *(ptr_b) = &b;
    int *ptr_c = c;
    int *ptr_d = &d;
    // cout << *(++ptr_a) << "\t" << ++(*ptr_a) << "\n";
    cout << ptr_a << "\t" << ptr_b << '\t' << ptr_c << '\t' << ptr_d << '\n';
}

void array_and_pointers()
{
    int x = 7;
    int a[10];
    // int b[10]; // a<0
    forn(i, 10)
    {
        a[i] = i + 1;
    }
    // forn(i, 10)
    // {
    //     b[i] = i + 101;
    // }
    int *ptr_a = &a[-7];
    // a[12] = 13;
    // cout << a[10] << "\t" << a[11] << "\n";
    // cout << a[13] << "\n";
    // cout << a << "\t" << b << "\n";
    // ptr_a += x;
    // cout << (*ptr_a) << '\n';
    // int *ptr_x = &a[0], *ptr_y = &a[x];
    // cout << ptr_x << "\t" << ptr_y << "\n";
    // cout << ptr_y - ptr_x << "\n";

    // cout << *(ptr_a + 7) << "\t" << a[7] << '\n';
    cout << ptr_a[13] << "\n";
}

void solve()
{
    array_and_pointers();
    // code here
    // int a = 4;
    // int *ptr_a = &a;
    // cout << ptr_a << "\n";
    // int b = 'a';
    // int *ptr_b = &b;
    // cout << ptr_a << "\t" << ptr_b << "\n";
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