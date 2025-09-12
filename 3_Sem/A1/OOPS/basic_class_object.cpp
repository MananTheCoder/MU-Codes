#include <bits/stdc++.h>
using namespace std;

class Cars
{
private:
    string color;

public:
    // data members
    string company;
    string model;
    string body_material;
    bool transmission;
    int seats;
    double top_speed;
    char fuel;
    double mileage;

    Cars()
    {
        this->company = "";
        this->color = "";
        this->model = "";
        // this->seats = NULL;
        //
    }

    Cars(string Color, string company, int seats, string model)
    {
        color = Color;
        this->company = company;
        this->seats = seats;
        this->model = model;
    }

    Cars(Cars *obj)
    {
        this->company = obj->company;
    }

    Cars(Cars &obj)
    {
        this->company = obj.company;
        this->model = obj.model;
        this->color = obj.color;
        this->seats = obj.seats;
    }

    // member functions

    void drive(string driver)
    {
        cout << driver << " is driving " << this->company << "'s " << this->model << ".\n";
    }

    void shiftGear(int gear)
    {
        cout << "The new gear is " << gear << ".\n";
    }

    void setColor(string color)
    {
        this->color = color;
    }

    string getColor()
    {
        return this->color;
    }

private:
    void calculate_mileage(int km, int litres)
    {
        mileage = (double)km / litres;
    }
};

void create_Prem_car(Cars &keshvi_car)
{
    // Cars *Prem_car = new Cars(keshvi_car);
    Cars Prem_car(keshvi_car);
    // cout << Prem_car.company << "\n";
    Prem_car.seats = 2;
    Prem_car.model = "M4 Competition";
    Prem_car.body_material = "Carbon";
    // Prem_car.color = "Matt Black";
    Prem_car.setColor("Matt Black");

    // Prem_car.drive("Prem");

    // Prem_car.color = "Grey";
    cout << Prem_car.getColor() << "\n";
}

int main()
{
    // Cars *keshvi_car = new Cars();
    Cars keshvi_car;
    // keshvi_car.color = "Black";
    // keshvi_car.company = "BMW";
    // keshvi_car.seats = 5;

    // Cars rudra_car("silver", "toyota", 7, "innova"); //
    // cout << rudra_car.company << "\n";

    create_Prem_car(keshvi_car);
}