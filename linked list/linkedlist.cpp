#include <iostream>
using namespace std;
// Define a Node structure to represent each element in the linked list
struct Node
{
    int data;   // Data stored in the node
    Node *next; // Pointer to the next node in the list.
};
// In C++, the->operator is used to access members of a structure or class through a pointer.

int main()
{
    // Create three nodes and assign values to them
    Node *head = new Node{1, nullptr}; // Head node with data 1 and no next node
    // or we can also use this syntax to create node a assign values
    // Node * head = new Node;
    // Node->data = 1;
    // Node->next = nullptr
    Node *second = new Node{2, nullptr}; // Second node with data 2 and no next node
    Node *third = new Node{3, nullptr};  // Third node with data 3 and no next node

    // Link the nodes together to form a linked list
    head->next = second;  // Head points to the second node
    second->next = third; // Second node points to the third node

    // Print the elements of the linked list
    Node *current = head; // setting the value of head as a pointer, it will stores the address of first node for now, thorugh it we can acess its value using ->  
    while (current != nullptr)
    {
        cout << current->data << " "; // Print the data of the current node
        current = current->next;      // Move to the next node
    }

    // Clean up the dynamically allocated memory
    delete head;
    delete second;
    delete third;

    return 0;
}
