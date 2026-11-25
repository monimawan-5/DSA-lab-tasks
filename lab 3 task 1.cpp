#include <iostream>
using namespace std;

struct Node
{
    int value;
    Node* link;
};

int main()
{
    // Creating the nodes
    Node* first = new Node;
    Node* second = new Node;
    Node* third = new Node;
    Node* fourth = new Node;
    Node* fifth = new Node;

    // Assigning data and linking nodes
    first->value = 5;
    first->link = second;

    second->value = 10;
    second->link = third;

    third->value = 15;
    third->link = fourth;

    fourth->value = 20;
    fourth->link = fifth;

    fifth->value = 25;
    fifth->link = NULL;

    // Displaying the linked list
    Node* current = first;
    int total = 0;

    cout << "List: ";

    while (current != NULL)
    {
        cout << current->value << " -> ";
        total++;
        current = current->link;
    }

    cout << "NULL" << endl;

    // Showing the number of nodes
    cout << "Number of nodes: " << total << endl;

    // Freeing allocated memory
    current = first;

    while (current != NULL)
    {
        Node* next = current->link;
        delete current;
        current = next;
    }

    first = NULL;

    return 0;
}
