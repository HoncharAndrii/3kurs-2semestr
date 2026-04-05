#include <iostream>

class Smartphone
{
public:
    std::string brand;
    int year;
    int price;
    float size;
    int weight;
    std::string processor;
    int RAM;
    int battery;

    float BatteryToWeightRatio()
    {
        return (float)battery / (float)weight;
    }
};

int main()
{
    Smartphone smartphone;

    std::cout << "Enter smartphone brand\n";
    std::cin >> smartphone.brand;

    std::cout << "Enter smartphone year\n";
    std::cin >> smartphone.year;
    
    std::cout << "Enter smartphone price\n";
    std::cin >> smartphone.price;
    
    std::cout << "Enter smartphone size\n";
    std::cin >> smartphone.size;

    std::cout << "Enter smartphone weight\n";
    std::cin >> smartphone.weight;

    std::cout << "Enter smartphone processor\n";
    std::cin >> smartphone.processor;

    std::cout << "Enter smartphone RAM\n";
    std::cin >> smartphone.RAM;
    
    std::cout << "Enter smartphone battery\n";
    std::cin >> smartphone.battery;

    std::cout << "Smartphone specifications\n";
    std::cout << "Smartphone brand: " << smartphone.brand << '\n';
    std::cout << "Smartphone year: " << smartphone.year << '\n';
    std::cout << "Smartphone price: " << smartphone.price << '\n';
    std::cout << "Smartphone size: " << smartphone.size << '\n';
    std::cout << "Smartphone weight: " << smartphone.weight << '\n';
    std::cout << "Smartphone processor: " << smartphone.processor << '\n';
    std::cout << "Smartphone RAM: " << smartphone.RAM << '\n';
    std::cout << "Smartphone battery: " << smartphone.battery << '\n';
    std::cout << "Smartphone battery to weight ratio: " << smartphone.BatteryToWeightRatio() << '\n';
}