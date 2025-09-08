#include <bits/stdc++.h>
using namespace std;

class Cars
{
public:
    // data members
    string company;
    string color;
    string model;
    bool transmission;
    int seats;
    double top_speed;
    char fuel;
    double mileage;

    // member functions
    void calculate_mileage(int km, int litres)
    {
        mileage = (double)km / litres;
    }

    Cars(string Color, string company, int seats, string model)
    {
        color = Color;
        this->company = company;
        this->seats = seats;
        this->model = model;
    }

    void drive()
    {
        cout << "Hi, the car is moving.\n";
    }

    void shiftGear(int gear)
    {
        cout << "The new gear is " << gear << ".\n";
    }
};

int main()
{
    // Cars *keshvi_car = new Cars();
    // Cars keshvi_car;
    // keshvi_car.color = "Black";
    // keshvi_car.company = "BMW";
    // keshvi_car.seats = 5;

    Cars rudra_car("silver", "toyota", 7, "innova"); //
    cout << rudra_car.company << "\n";
}