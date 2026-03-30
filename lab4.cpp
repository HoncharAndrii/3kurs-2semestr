#include <iostream>

template <typename T> class Stack
{
public:
    T data[100];
    T* stack_ptr = &data[0];

    void push(T value)
    {
        *stack_ptr = value;
        stack_ptr++; 
    }
    void pop()
    {
        *stack_ptr = 0;
        stack_ptr--;
    }
    T top()
    {
        return *(stack_ptr - 1);
    }
    bool IsEmpty()
    {
        if (stack_ptr == &data[0]) return true;
        return false;
    }
};

int main()
{
    std::cout << "Integer stack\n";

    Stack<int> stacki;

    int n = 0;
    std::cout << "Enter n\n";
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        int value = 0;
        std::cout << "Enter value\n";
        std::cin >> value;
        stacki.push(value);
    }

    std::cout << "Stack:\n";
    while (!stacki.IsEmpty())
    {
        std::cout << stacki.top() << '\n';
        stacki.pop();
    }

    std::cout << "\nFloat stack\n";

    Stack<float> stackf;

    int m = 0;
    std::cout << "Enter m\n";
    std::cin >> m;

    for (int i = 0; i < m; i++)
    {
        float value = 0;
        std::cout << "Enter value\n";
        std::cin >> value;
        stackf.push(value);
    }

    std::cout << "Stack:\n";
    while (!stackf.IsEmpty())
    {
        std::cout << stackf.top() << '\n';
        stackf.pop();
    }
}