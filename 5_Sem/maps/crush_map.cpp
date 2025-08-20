#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<string> vs;
typedef unordered_map<string, vs> umsvs;
typedef pair<string, vs> psvs;

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

void print_crush_list(vs &crush_list)
{
    for (string crush : crush_list)
    {
        cout << crush << ", ";
    }
    cout << "\n";
}

void print_crush_map(umsvs &crush_map)
{
    // way Iterators
    // umsvs::iterator itr;
    // for (itr = crush_map.begin(); itr != crush_map.end(); itr++)
    // {
    //     psvs row = *itr;
    //     string student = row.first;
    //     vs crush_list = row.second;
    //     cout << student << ":\t";
    //     print_crush_list(crush_list);
    // }

    // way using pair
    // for (psvs row : crush_map)
    // {
    //     cout << row.first << "\t";
    //     print_crush_list(row.second);
    // }

    // way each object looping
    for (auto [student, crush_list] : crush_map)
    {
        cout << student << "\t";
        print_crush_list(crush_list);
    }
}

void populate_crush_map(umsvs &crush_map)
{
    crush_map["Mihir"] = {"Disha"};
    // crush_map.insert(make_pair("Phani", {"Aditya"}));
    crush_map.insert({"Phani", {"Aditya"}});
    // crush_map["Phani"] = {"Aditya"};
    crush_map["Niki"] = {"KP"};
    crush_map["Naren"] = {"Shivani", "Disha", "Kirti", "Hitarthi"};
    crush_map["Karma"] = {"Hitarthi"};
}

void solve()
{
    umsvs crush_map;
    populate_crush_map(crush_map);
    print_crush_map(crush_map);
}

int main()
{
    solve();
}