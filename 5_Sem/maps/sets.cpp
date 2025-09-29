#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

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

void print_animals(set<string> &animals)
{
    // for (string animal : animals)
    // {
    //     cout << animal << "\t";
    // }
    // cout << "\n";

    set<string>::iterator ptr;
    for (ptr = animals.begin(); ptr != animals.end(); ptr++)
    {
        cout << (*ptr) << "\t";
    }
    cout << "\n";
}

void populate_animals(set<string> &animals)
{
    animals.insert("Donkey");
    animals.insert("Owl");
    animals.insert("Cow");
    animals.insert("Siberian Wolf");
    animals.insert("Koala");
}

void solve()
{
    set<string> animals;
    populate_animals(animals);
    print_animals(animals);
}

int main()
{
    solve();
}