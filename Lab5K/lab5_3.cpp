#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    std::ifstream file("lab5text.txt");

    if (!file.is_open())
    {
        std::cerr << "Error loading file\n";
        return 1;
    }

    std::vector <float> v;

    std::string line;
    while (getline(file , line))
    {
        v.emplace_back(std::stof(line));
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > 0)
        {
            v.erase(v.begin() + i);
        }
    }

    std::cout << "Vector 1:\n";
    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << '\n';
    }

    std::vector <float> v2;
    v2.reserve(v.size());

    for (int i = 0; i < v.size(); i++)
    {
        v2.emplace_back(v[v.size() - i - 1]);
    }

    std::cout << "Vector 2:\n";
    for (int i = 0; i < v2.size(); i++)
    {
        std::cout << v2[i] << '\n';
    }
}