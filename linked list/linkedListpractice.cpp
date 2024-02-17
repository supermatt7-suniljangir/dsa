#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// lets create a node struct first
struct Node
{
    int data;
    Node *next;
};

int main()
{

    //   lets create the head first
    Node *head = new Node{1, nullptr};

    // lets create a few new nodes
    Node *second = new Node{2, nullptr};
    Node *third = new Node{3, nullptr};

    // we could also have done it this way

    // Node *head = new Node{1, new Node{2, new Node{3, nullptr}}};
    // this way we are setting a new node in the second data or in the next part a new node

    // but if we go simpler, we wil have to assign them manually as we have declared pointer allocating memory for new nodes on the heap.
    head->next = second;  // we are setting the memory address of second node as the next pointer for head here
    second->next = third; // we are setting the pointer part(next) of second node to third node's memory address, the third itself is the memory address so no need for its pointer

    //  now that we have our linked list, we can define a current variable which hold the value of current node's address, through it we can retreive values
    Node *current = head; // initially setting the value of head to current, head is the memory address of node 1, which means current can acess it, thorugh ->

    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    };
    // Clean up the dynamically allocated memory
    delete head;
    delete second;
    delete third;

    return 0;
}