#include <iostream>

class Worker
{
public:
    virtual int GetSalary() = 0;
};

class WorkerByHour : public Worker
{
public:
    int hours;
    int pay;

    WorkerByHour()
    {
        hours = 0;
        pay = 0;
    }
    WorkerByHour(int hours , int pay)
    {
        this->hours = hours;
        this->pay = pay;
    }

    virtual int GetSalary() override
    {
        return pay * hours;
    }
};

class WorkerByMonth : public Worker
{
public:
    int pay;

    WorkerByMonth()
    {
        pay = 0;
    }
    WorkerByMonth(int pay)
    {
        this->pay = pay;
    }

    virtual int GetSalary() override
    {
        return pay;
    }
};

class WorkerPrecent : public Worker
{
public:
    float precent;
    int revenue;

    WorkerPrecent()
    {
        precent = 0;
        revenue = 0;
    }
    WorkerPrecent(float precent , int revenue)
    {
        this->precent = precent;
        this->revenue = revenue;
    }

    virtual int GetSalary() override
    {
        return revenue * precent;
    }
};


int main()
{
    Worker** worker = new Worker* [3];

    worker[0] = new WorkerByHour(40 , 10);
    std::cout << "Worker by hour salary: " << worker[0]->GetSalary() << '\n';

    worker[1] = new WorkerByMonth(500);
    std::cout << "Workey by month salary: " << worker[1]->GetSalary() << '\n';
    
    worker[2] = new WorkerPrecent(0.20 , 10000);
    std::cout << "Worker by precent salary: " << worker[2]->GetSalary() << '\n';
}