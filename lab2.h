#pragma once
#include <string>

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