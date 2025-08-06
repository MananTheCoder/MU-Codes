#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<string, int> msi;

#define forn(i, n) for (int i = 0; i < n; i++)

vector<int> input_vi()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    return v;
}

void print_vi(vector<int> v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << "\t";
    }
    cout << "\n";
    v[0] = 10;
}

void print_map(msi &converter)
{
    // way 1
    map<string, int>::iterator itr;
    // for (itr = converter.begin(); itr != converter.end(); itr++)
    // {
    //     // dereferencing operator
    //     pair<string, int> row = (*itr);
    //     string key = row.first;
    //     int value = row.second;
    //     cout << key << "\t" << value << "\n";
    // }

    // way 2
    // for (pair<string, int> row : converter)
    // {
    //     string key = row.first;
    //     int value = row.second;
    //     cout << row.first << "\t" << row.second << "\n";
    // }

    // way 3
    // for (auto [key, value] : converter) // structured key binding
    // {
    //     cout << key << "\t" << value << "\n";
    // }
}

void populate_converter(msi &converter)
{
    converter["one"] = 1;
    converter.insert(make_pair("two", 2));
    converter.insert({"three", 3});
}

void solve()
{
    // unordered_map<int, int> a;
    map<string, int> converter;
    populate_converter(converter);
    print_map(converter);
}

int main()
{
    solve();
}