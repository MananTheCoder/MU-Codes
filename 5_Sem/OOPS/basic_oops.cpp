#include <bits/stdc++.h>
using namespace std;

class Toys
{
public:
    string color;
    string brand;
    char grade;

    Toys()
    {
        this->color = "NULL";
        this->brand = "NULL";
        this->grade = '\0';
    }

    Toys(string brand)
    {
        this->brand = brand;
    }
    Toys(string color, string brand, char grade)
    {
        this->color = color;
        (*this).brand = brand;
        this->grade = grade;
    }
};

void playing_with_classes()
{
    Toys Phani_cricket_bat("red", "SG", 'A');
    // Toys Satish_cricket_bat("red", "MRF", 'A');
    Toys Satish_cricket_bat(Phani_cricket_bat);
    Satish_cricket_bat.brand = "MRF";
    cout << Phani_cricket_bat.brand << "\n";
    cout << Satish_cricket_bat.brand << "\n";
}

void solve()
{
    playing_with_classes();
    // difference between struct and class.
}

int main()
{
    solve();
}