#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef pair<int, int> pii;
typedef pair<int, char> pic;
typedef unordered_map<string, pic> umspic;
typedef umspic::iterator umspicitr;

#define forn(i, n) for (int i = 0; i < n; i++)
#define pb push_back

struct Person
{
    int age;
    string name;
    int height; // cm
    double weight;
    char gender;

    void walk()
    {
        cout << "I am walking.\n";
    }

    Person()
    {
        this->age = 0;
        this->gender = '-';
        this->name = "";
    }

    Person(int age, char gender, string name)
    {
        this->age = age;
        this->gender = gender;
        this->name = name;
    }
};

void size_of_struct()
{
    Person ABC;
    ABC.walk();
    ABC.age = 21;
    ABC.weight = 70;
    ABC.gender = 'M';
    ABC.height = 185;
    cout << sizeof(Person) << "\n";
    cout << sizeof(ABC) << "\n";
}

void fill_data(umspic &ahp_data)
{
    ahp_data["AL"] = {21, 'M'};
    ahp_data["VC"] = {22, 'M'};
    ahp_data["AN"] = {5318008, 'M'};
    ahp_data["HR"] = {31, 'F'};
    ahp_data["JM"] = {20, 'M'};
    ahp_data["UH"] = {1e7, 'M'};
    ahp_data["KM"] = {56, 'M'};
    ahp_data["AM"] = {INT_MAX, 'M'};
    ahp_data["RS"] = {INT_MIN, 'M'};
    ahp_data["MG"] = {32, 'M'};
}

void fill_struct_array(umspic &ahp_data, Person *AHP)
{
    int index = 0;
    for (umspicitr itr = ahp_data.begin(); itr != ahp_data.end(); itr++, index++)
    {
        // AHP[itr.first] = //
        AHP[index].name = itr->first;
        AHP[index].age = (*itr).second.first;
        AHP[index].gender = itr->second.second;
    }
}

void array_structs(Person *AHP)
{
    umspic ahp_data;
    fill_data(ahp_data);

    fill_struct_array(ahp_data, AHP);

    // forn(i, ahp_data.size())
    // {
    //     cout << AHP[i].name << "\n";
    // }
}

void print_data(Person **ptrs, int n)
{
    forn(i, n)
    {
        cout << ptrs[i]->name << ":\t" << ptrs[i]->age << '\n';
    }
}

void array_struct_pointers(Person *AHP)
{
    int n = 10;
    // cout << sizeof(AHP) << '\t' << sizeof(AHP[0]) << "\n";
    Person *ptrs[n];
    forn(i, n)
    {
        ptrs[i] = &AHP[i];
    }

    print_data(ptrs, n);
}

void playground()
{
    Person AHP[10];
    array_structs(AHP);
    array_struct_pointers(AHP);
}

void solve()
{
    // size_of_struct();
    playground();
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