#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct TreeNode
{

    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int value) : data(value), left(nullptr), right(nullptr){};
};

TreeNode *searchBST(TreeNode *root, int key)
{
    // return the root node if the tree has no subtrees or child or it contains the key we are looking for.
    if (root == nullptr || root->data == key)
    {
        return root;
    }
    if (key < root->data){
        return searchBST(root->left, key);
    }
    else{
        return searchBST(root->right, key);
    }
}

    
int main()
{
TreeNode *root = new TreeNode(5);
TreeNode *secondNode = new TreeNode(4);
TreeNode *thirdNode = new TreeNode(10);
TreeNode *fourthNode = new TreeNode(2);
TreeNode *fifthNode = new TreeNode(3);
TreeNode *sixthNode = new TreeNode(9);
TreeNode *seventhNode = new TreeNode(11);

// a binary search tree must always be a binary tree first

// lets define the key
int key = 11;

root->left = secondNode;
root->right = thirdNode;
secondNode->left =fourthNode;
secondNode->right =fifthNode;
thirdNode->left = sixthNode;
thirdNode->right = seventhNode;//this ts the node with the key

// lets check whether our searchBST function works or not

TreeNode *keyNode = searchBST(root, key);//returns the pointer value of seventhNode
cout << keyNode << endl;       //0x1f6f60
cout << seventhNode << endl;   //0x1f6f60
  
// they would always return the same memory location.

// now that everything is done, we can free up memory space in case nodes are no longer needed
delete root;
delete secondNode;
// and so on.
    return 0;
}