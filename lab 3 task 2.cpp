#include <iostream>
using namespace std;

struct Node
{
    int value;
    Node* link;
};

int main()
{
    const int totalNodes = 5;

    Node* first = NULL;
    Node* last = NULL;

    cout << "Enter " << totalNodes << " values: ";

    // Build the linked list
    for (int i = 0; i < totalNodes; i++)
    {
        Node* current = new Node;

        cin >> current->value;
        current->link = NULL;

        if (first == NULL)
        {
            first = current;
            last = current;
        }
        else
        {
            last->link = current;
            last = current;
        }
    }

    // Print all values and calculate node count
    Node* ptr = first;
    int nodes = 0;

    cout << "\nLinked List: ";

    while (ptr != NULL)
    {
        cout << ptr->value << " -> ";
        nodes++;
        ptr = ptr->link;
    }

    cout << "NULL";
    cout << "\nTotal Nodes: " << nodes << endl;

    // Clear the allocated memory
    ptr = first;

    while (ptr != NULL)
    {
        Node* next = ptr->link;
        delete ptr;
        ptr = next;
    }

    first = NULL;
    last = NULL;

    return 0;
}
