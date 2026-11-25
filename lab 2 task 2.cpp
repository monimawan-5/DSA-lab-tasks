#include <iostream>
using namespace std;

struct Node
{
    int value;
    Node* previous;
    Node* following;
};

int main()
{
    Node* first = NULL;
    Node* last = NULL;

    // Adding nodes to the doubly linked list
    for (int n = 1; n <= 5; n++)
    {
        Node* current = new Node;

        cout << "Enter value for node " << n << ": ";
        cin >> current->value;

        current->previous = last;
        current->following = NULL;

        if (first == NULL)
        {
            first = current;
        }
        else
        {
            last->following = current;
        }

        last = current;
    }

    // Display from first node to last node
    cout << "\nList in Forward Direction:\n";

    Node* pointer = first;

    while (pointer != NULL)
    {
        cout << pointer->value << " <-> ";
        pointer = pointer->following;
    }

    cout << "NULL\n";

    // Display from last node to first node
    cout << "\nList in Reverse Direction:\n";

    pointer = last;

    while (pointer != NULL)
    {
        cout << pointer->value << " <-> ";
        pointer = pointer->previous;
    }

    cout << "NULL\n";

    // Find total number of nodes
    int total = 0;
    pointer = first;

    while (pointer != NULL)
    {
        total++;
        pointer = pointer->following;
    }

    cout << "\nNumber of Nodes: " << total << endl;

    // Delete all nodes from memory
    pointer = first;

    while (pointer != NULL)
    {
        Node* next = pointer->following;
        delete pointer;
        pointer = next;
    }

    return 0;
}
