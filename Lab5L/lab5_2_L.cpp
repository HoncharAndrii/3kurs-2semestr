#include <iostream>

class Wheel
{
public:
    float diameter;
    Wheel()
    {
        diameter = 0;
    }
    void SetDiameter(float diameter)
    {
        this->diameter = diameter;
    }
    void PrintDiameter()
    {
        std::cout << "Diamterer: " << diameter << '\n';
    }
};

class Bicycle
{
public:
    static const int numberOfWheels = 2;
    Wheel wheel[numberOfWheels];

    void PrintBicycle()
    {
        for (int i = 0; i < numberOfWheels; i++)
        {
            wheel[i].PrintDiameter();
        }
    }
};

class Car
{
public:
    static const int numberOfWheels = 4;
    Wheel wheel[numberOfWheels];
    
    void PrintCar()
    {
        for (int i = 0; i < numberOfWheels; i++)
        {
            wheel[i].PrintDiameter();
        }
    }
};


int main()
{
    Bicycle bicycle;

    float diameter1;
    std::cout << "Enter size for diameter for bicycle\n";
    std::cin >> diameter1;

    for (int i = 0; i < bicycle.numberOfWheels; i++)
    {
        bicycle.wheel[i].SetDiameter(diameter1);
    }

    bicycle.PrintBicycle();

    Car car;

    float diameter2;
    std::cout << "Enter size for diameter for car\n";
    std::cin >> diameter2;

    for (int i = 0; i < car.numberOfWheels; i++)
    {
        car.wheel[i].SetDiameter(diameter2);
    }

    car.PrintCar();
}