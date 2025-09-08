#include <bits/stdc++.h>
using namespace std;

class Car
{
public:
    int top_speed;
    string company;
    string color;
    string type;
    string model;
    int seater;

    Car()
    {
        top_speed = '\0';
        company = "";
        color = "";
        type = "";
        model = "";
        seater = '\0';
    }

    Car(int top_speed, string color, string company, int seater)
    {
        this->top_speed = top_speed;
        this->color = color;
        this->company = company;
        this->seater = seater;
    }
};

void solve()
{
    Car rishi(428, "Blue", "Bugatti", 2);
    // Car Prem(428, "Chrome", "Bugatti", 2);
    Car Prem(rishi);
    Prem.color = "Chrome";
    cout << Prem.color << "\n";
    // lemme know when you are done talking.
    // till then class is on wait.
}

int main()
{
    // while (t--)
    // {
    solve();
    // }
}