#include <iostream>

class Liquid
{
private:
    std::string name;
    float density;
public:
    Liquid()
    {
        name = "NoName";
        density = 0;
    }
    Liquid(std::string name , float density)
    {
        this->name = name;
        this->density = density;
    }
    ~Liquid()
    {
        std::cout << "Liquid destructror called\n";
    }

    void LiquidPrint()
    {
        std::cout << "Name: " << name << '\n';
        std::cout << "Density: " << density << '\n'; 
    }
    void SetDensity(float density)
    {
        this->density = density;
    }
};

class Alcohol : Liquid
{
private:
    float strength;
public:
    Alcohol()
    : Liquid() 
    {    
        strength = 0;
    }
    Alcohol(float strength)
     : Liquid() 
    {
        this->strength = strength;
    }
    Alcohol(std::string name , float density , float strength)
     : Liquid(name , density)
    {
        this->strength = strength;
    }
    ~Alcohol()
    {
        std::cout << "Alcohol destructor called\n";
    }
    void AlcoholPrint()
    {
        LiquidPrint();
        std::cout << "Strength: " << strength << '\n';
    }
    void SetStrength(float strength)
    {
        this->strength = strength;
    }
};

int main()
{
    Liquid liquid;
    liquid.LiquidPrint();

    Liquid liquid1("Liquid" , 5.0);
    liquid1.LiquidPrint();
    liquid1.SetDensity(16.0);
    liquid1.LiquidPrint();

    Alcohol alcohol;
    alcohol.AlcoholPrint();

    Alcohol alcohol1("Alcohol" , 17.0 , 100.0);
    alcohol1.AlcoholPrint();
    alcohol1.SetStrength(5.0);
    alcohol1.AlcoholPrint();
}