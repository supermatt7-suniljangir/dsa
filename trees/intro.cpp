#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int value) : data(value), left(nullptr), right(nullptr){};
    // doing this is same as donig this:
    // Node(int varData)
    // {
    //     this->data = varData;
    //     this->next = nullptr;
    //     this->right = nullptr;
    // }
};

int main()
{
    // root: the top node
    // parent: node which connects to the child
    // child: the node which is connected to a parent(another node);
    // leaf node: also known as external node or terminal node, is the last node or the node which could not be a parent node(vo node jo kabhi baap naa ban paya(napunsak)(kailash khokhar))
    // or nodes with no children are called leaf nodes

    // internal nodes: also known as non-terminal node, nodes with atleast one children.

    // depth: the numbers of edges a node has from the root.(number of edges from root to)
    // height: number of edges from a node to the deepset or lowest children
    // if a node has a children(1) and 1 too has a children then the height of this node would be 2
    // siblings: nodes belonging to the same parents are called siblings

    // ancestors: the parents grandparents of a node
    // descedents: the children and grandchildren of a node
    // successor: direct children of a node
    // predecessor: direct parent of sibling nodes

    // binary tree representation though linked list

    Node *root = new Node(1); // assigns a root with no left or right link but a data value 1.

    Node *secondNode = new Node(2);
    Node *thirdNode = new Node(3);
    Node *fourthNode = new Node(4);
    Node *fifthNode = new Node(5);

    // now we can perform any operation we desire or we can free up memory space if no longer needed.

    delete root;
    delete secondNode;
    delete thirdNode;
    delete fourthNode;
    delete fifthNode;
}