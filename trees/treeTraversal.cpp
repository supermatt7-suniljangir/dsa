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


void inOrder(TreeNode* root){
    if(root == nullptr) return;
    
inOrder(root->left);
cout << root->data << " ";
inOrder(root->right);
    
}
void preOrder(TreeNode* root){
    if(root == nullptr) return;
    
cout << root->data << " ";
preOrder(root->left);
preOrder(root->right);
    
}

void postOrder(TreeNode* root){
    if(root == nullptr) return;
    
postOrder(root->left);
postOrder(root->right);
cout << root->data << " ";
    
}

int main(){

    
TreeNode *root = new TreeNode(5);
TreeNode *secondNode = new TreeNode(4);
TreeNode *thirdNode = new TreeNode(10);
TreeNode *fourthNode = new TreeNode(2);
TreeNode *fifthNode = new TreeNode(3);
TreeNode *sixthNode = new TreeNode(9);
TreeNode *seventhNode = new TreeNode(11);
 

root->left = secondNode;
root->right = thirdNode;
secondNode->left =fourthNode;
secondNode->right =fifthNode;
thirdNode->left = sixthNode;
thirdNode->right = seventhNode;
  /*
          5
        /  \
      4    10
     /\    /\
    2  3  9 11 

    */
//     inorder traversal: 2 4 3 5 9 10 11
inOrder(root);
cout << ""<< endl;
// Preorder traversal: 5 4 2 3 10 9 11
preOrder(root);
cout << "" << endl;
// Postorder traversal: 2 3 4 9 11 10 5
postOrder(root);


    return 0;
}