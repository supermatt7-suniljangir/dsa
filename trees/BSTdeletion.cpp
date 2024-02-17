#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// delection from a BST
// cases of deletion
// 1. the node is a leaf node
// 2. the node is not a leaf node and it has only 1 child
// 3. the node is a node with both children




struct node{
    int data;
    node *left , *right;
    node(int val){
        data = val;
        right  = left = nullptr;
    }
};
// node* inOrderSuccessor(node* Node){
//     Node = Node->right;
//     while(Node->left != nullptr){
//         Node = Node->left;
//     }
//     return Node;
// }

node *inPre(node *root){
    root = root->left;
    while(root->right != nullptr){
        root = root->right;
    }
    return root;
}

node *delete_node(node *root , int val){
    node *temp;
    if(root == nullptr){
        cout<<"Element not found"<<endl; 
        return nullptr;
           }
    else if(root->data > val){
        root->left  = delete_node(root->left , val);
    }
    else if(root->data < val){
        root->right = delete_node(root->right , val);
    }
    else{
        if(root->left != nullptr && root->right != nullptr){     ///This condition will true when the node have both left and right child node.
            temp = inPre(root);
            root->data = temp->data;
            root->left = delete_node(root->left , root->data);
        }
        else{     ///If the node have one child.
            temp = root;
           if(root->left == nullptr){
               root = root->right;
           }
           else{
               root  = root->left;
           }
        }
        delete(temp);
    }
    return root;
}
void inorder(node *root){
    if(root){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

int main()
{
    /*
      5
    /  \
  3    10
 /\    /\
2  4  9 11


*/
    node *root = new node(5);
    node *secondNode = new node(3);
    node *thirdNode = new node(10);
    node *fourthNode = new node(2);
    node *fifthNode = new node(4);
    node *sixthNode = new node(9);
    node *seventhNode = new node(11);


    root->left = secondNode;
    root->right = thirdNode;
    secondNode->left = fourthNode;
    secondNode->right = fifthNode;
    thirdNode->left = sixthNode;
    thirdNode->right = seventhNode;


// lets first print the tree
inorder(root);
delete_node(fifthNode, fifthNode->data);
cout << "" << endl;
inorder(root);
    return 0;
}