#include <iostream>

class Human
{
public:
    std::string name;
    int age;

    Human()
    {
        name = "Noname";
        age = 0;
    }
    friend std::ostream &operator<<(std::ostream& out , Human& human)
    {
        out << "Name: " << human.name << " age: " << human.age << '\n';
        return out;
    }
    friend std::istream &operator>>(std::istream& in , Human& human)
    {
        in >> human.name >> human.age;
        return in;
    }

    Human (Human& human)
    {
        name = human.name;
        age = human.age;
    }

    Human& operator=(Human& human)
    {
        name = human.name;
        age = human.age;
        return *this;
    }
};

class Teacher : Human
{
public: 
    std::string specialty;

    Teacher()
     : Human() , specialty("")
    {

    }

    friend std::ostream &operator<<(std::ostream& out , Teacher& teacher)
    {
        out << "Name:" << teacher.name << " age:" << teacher.age << " specialty:" << teacher.specialty << '\n';
        return out;
    }
    friend std::istream &operator>>(std::istream& in , Teacher& teacher)
    {
        in >> teacher.name >> teacher.age >> teacher.specialty;
        return in;
    }

    Teacher (Teacher& teacher)
    {
        name = teacher.name;
        age = teacher.age;
        specialty = teacher.specialty;
    }

    Teacher& operator=(Teacher& teacher)
    {
        name = teacher.name;
        age = teacher.age;
        specialty = teacher.specialty;
        return *this;
    }
};

int main()
{
    Human human;

    std::cout << "Enter human: name , age \n";
    std::cin >> human;

    std::cout << "Human 1: " << human << '\n';

    Human human2 = human;

    std::cout << "Human 2: " << human2 << '\n';

    Teacher teacher;

    std::cout << "Enter teacher: name , age , specialty\n";
    std::cin >> teacher;

    std::cout << "Teacher1: " << teacher << '\n';

    Teacher teacher2(teacher);

    std::cout << "Teacher2: " << teacher2 << '\n';
    teacher2.specialty = "Computer Science";
    std::cout << "Teacher2: " << teacher2 << '\n';
}