#include <iostream>

struct Node
{
    float data = 0;
    Node* next = nullptr;
};

class LinkedList
{
public:
    Node* head = new Node;
    void push(float value) 
    {
        Node* cur_node = head;
        while (cur_node->next != nullptr)
        {
            cur_node = cur_node->next;
        }
        cur_node->data = value;
        cur_node->next = new Node;
    }
    void print()
    {
        Node* cur_node = head;
        while (cur_node->next != nullptr)
        {
            std::cout << cur_node->data << '\n';
            cur_node = cur_node->next;
        }
        std::cout << '\n';
    }
    void merge(LinkedList& list1 , LinkedList& list2)
    {
        Node* cur_node = list1.head;
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

int main()
{
    LinkedList list1;
    LinkedList list2;

    int n = 0;
    std::cout << "Enter size for list1\n";
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        float value;
        std::cout << "Enter value\n";
        std::cin >> value;
        list1.push(value);
    }
    list1.print();

    int m = 0;
    std::cout << "Enter size for list2\n";
    std::cin >> m;

    for (int i = 0; i < m; i++)
    {
        float value;
        std::cout << "Enter value\n";
        std::cin >> value;
        list2.push(value);
    }
    list2.print();

    std::cout << "Merged list\n";
    LinkedList mergedList;
    mergedList.merge(list1 , list2);
    mergedList.print();
}