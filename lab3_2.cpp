#include <iostream>
#include <math.h>

bool IsNegative(float number)
{
    if (number <= 0) return true;
    return false;
}

bool IsFloat(float number)
{
    if (number != round(number)) return true;
    return false;
}

int factorial(float number)
{
    try
    {
        if (IsNegative(number) || IsFloat(number))
        {
            throw -1;
        }

        int fact = 1;
        for (int i = 2; i <= number; i++)
        {
            fact *= i;
        }
        return fact;
    }
    catch(const int& e)
    {
        std::cerr << "Bad number" << '\n';
    }
    return -1;
}

int main()
{
    float number;

    std::cout << "Enter number\n";
    std::cin >> number;

    std::cout << "Factorial\n";
    std::cout << factorial(number);
}