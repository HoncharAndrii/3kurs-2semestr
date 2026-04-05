#include <iostream>
#include "lab1_2.h"

int main()
{
    int count = 0;

    std::cout << "Enter count:\n";
    std::cin >> count;

    Smartphone smartphones[count];

    for (int i = 0; i < count; i++)
    {
        std::cout << "Enter smartphone infomation\n\n";

        std::cout << "Enter smartphone brand\n";
        std::cin >> smartphones[i].brand;

        std::cout << "Enter smartphone year\n";
        std::cin >> smartphones[i].year;
        
        std::cout << "Enter smartphone price\n";
        std::cin >> smartphones[i].price;
        
        std::cout << "Enter smartphone size\n";
        std::cin >> smartphones[i].size;

        std::cout << "Enter smartphone weight\n";
        std::cin >> smartphones[i].weight;

        std::cout << "Enter smartphone processor\n";
        std::cin >> smartphones[i].processor;

        std::cout << "Enter smartphone RAM\n";
        std::cin >> smartphones[i].RAM;
        
        std::cout << "Enter smartphone battery\n";
        std::cin >> smartphones[i].battery;
    }

    for (int i = 0; i < count; i++)
    {
        std::cout << "\n\n";
        std::cout << "Smartphone specifications\n\n";
        std::cout << "Smartphone brand: " << smartphones[i].brand << '\n';
        std::cout << "Smartphone year: " << smartphones[i].year << '\n';
        std::cout << "Smartphone price: " << smartphones[i].price << '\n';
        std::cout << "Smartphone size: " << smartphones[i].size << '\n';
        std::cout << "Smartphone weight: " << smartphones[i].weight << '\n';
        std::cout << "Smartphone processor: " << smartphones[i].processor << '\n';
        std::cout << "Smartphone RAM: " << smartphones[i].RAM << '\n';
        std::cout << "Smartphone battery: " << smartphones[i].battery << '\n';
        std::cout << "Smartphone battery to weight ratio: " << smartphones[i].BatteryToWeightRatio() << '\n';
    }
}