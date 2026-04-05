#include <iostream>

class Shape
{
public:
    std::string name;

    Shape()
    {
        name = "";
    }
    Shape(std::string name)
    {
        this->name = name;
    }

    void print()
    {
        std::cout << "Shape: " << name << '\n';
    }
};

class Circle : virtual public Shape
{
public:
    float diameter;

    Circle()
     : Shape("Circle")
    {
        diameter = 0;
    }
    Circle(float diameter)
     : Shape("Circle") 
    {
        this->diameter = diameter;
    }

    virtual void SetSize(float size)
    {
        this->diameter = size;
    }

    void print()
    {
        std::cout << "Circle diameter: " << diameter << '\n';
    }
};

class Square : virtual public Shape
{
public:
    float size;

    Square()
     : Shape("Square") 
    {
        size = 0; 
    }

    Square(float size)
     : Shape("Square")
    {
        this->size = size;
    }

    virtual void SetSize(float size)
    {
        this->size = size;
    }

    void print()
    {
        std::cout << "Square size: " << size << '\n';
    }
};

class InscribedCircle : virtual Circle , virtual Square
{
public:
    InscribedCircle()
     : Shape("Inscribed circle") , Square(0) , Circle(0)
    {

    }

    InscribedCircle(float size)
     : Shape("Inscribed circle") , Square(size) , Circle(size)
    {
    
    }

    void SetSize(float size) override
    {
        Square::SetSize(size);
        Circle::SetSize(size);
    }

    void print()
    {
        Shape::print();
        Square::print();
        Circle::print();
    }
};

int main()
{
    InscribedCircle incircle(5.5);

    incircle.print();

    incircle.SetSize(10.1);

    incircle.print();
}