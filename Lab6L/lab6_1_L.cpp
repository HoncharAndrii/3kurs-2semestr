#include <iostream>

class Base
{
public:
    int a;
};

class D1 : Base
{
public:
    int d1;
};

class D2 : Base
{
public:
    int d2;
};

class D3 : D1
{
public:
    int d3;
};

class D4 : D1 , D3
{
public:
    int d4;
};

class D5 : Base , D1 , D3
{
public: 
    int d5;
};


// Virtual
class D1V : virtual Base
{
public:
    int d1;
};

class D2V : virtual Base
{
public:
    int d2;
};

class D3V : virtual D1V
{
public:
    int d3;
};

class D4V : virtual D1V , virtual D3V
{
public:
    int d4;
};

class D5V : virtual Base , virtual D1V , virtual D3V
{
public: 
    int d5;
};

int main()
{
    std::cout << "Size of Base:" << sizeof(Base) << '\n';
    
    std::cout << "Size of D1:" << sizeof(D1) << '\n';
    std::cout << "Size of D2:" << sizeof(D2) << '\n';
    std::cout << "Size of D3:" << sizeof(D3) << '\n';
    std::cout << "Size of D4:" << sizeof(D4) << '\n';
    std::cout << "Size of D5:" << sizeof(D5) << '\n';

    std::cout << "Size of D1V:" << sizeof(D1V) << '\n';
    std::cout << "Size of D2V:" << sizeof(D2V) << '\n';
    std::cout << "Size of D3V:" << sizeof(D3V) << '\n';
    std::cout << "Size of D4V:" << sizeof(D4V) << '\n';
    std::cout << "Size of D5V:" << sizeof(D5V) << '\n';

}