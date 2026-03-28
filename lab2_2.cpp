#include <iostream>

template <typename T> struct Node
{
    T data = 0;
    Node* next = nullptr;
};

template <typename T> class LinkedList
{
public:
    Node<T>* head = new Node<T>;
    void push(T value) 
    {
        Node<T>* cur_node = head;
        while (cur_node->next != nullptr)
        {
            cur_node = cur_node->next;
        }
        cur_node->data = value;
        cur_node->next = new Node<T>;
    }
    void print()
    {
        Node<T>* cur_node = head;
        while (cur_node->next != nullptr)
        {
            std::cout << cur_node->data << '\n';
            cur_node = cur_node->next;
        }
        std::cout << '\n';
    }
    void merge(LinkedList<T>& list1 , LinkedList<T>& list2)
    {
        Node<T>* cur_node = list1.head;
        while (cur_node->next != nullptr)
        {
            push(cur_node->data);
            cur_node = cur_node->next;
        }
        cur_node = list2.head;
        while (cur_node->next != nullptr)
        {
            push(cur_node->data);
            cur_node = cur_node->next;
        }
    }
};

template <typename T> void InputList(LinkedList<T>& list)
{
    int n = 0;
    std::cout << "Enter size\n";
    std::cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        T value;
        std::cout << "Enter value\n";
        std::cin >> value;
        list.push(value);
    }
}

int main()
{
    char choice;

    std::cout << "Choose type (c - char , i - int , f - float)\n";
    std::cin >> choice;

    if (choice == 'c')
    {
        LinkedList<char> list;
        InputList<char>(list);
        list.print();
    }
    else if(choice == 'i')
    {
        LinkedList<int> list;
        InputList<int>(list);
        list.print();
    }
    else if(choice == 'f')
    {
        LinkedList<float> list;
        InputList<float>(list);
        list.print();
    }
    else { std::cout << "Wrong choice\n"; }
}