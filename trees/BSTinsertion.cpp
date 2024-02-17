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


void insert(TreeNode* root, int key){
TreeNode *prev = nullptr;//This creates a pointer to track the previous node while traversing the tree. It's initialized to nullptr initially.

while(root != nullptr){//This starts a loop to traverse the tree until a suitable position to insert the new node is found. It checks if the current node (root) is not nullptr, which means there are still nodes to traverse
    prev = root;//This updates the prev pointer to the current root node before moving down the tree so that we can keep a track of the parent node each time we go down

// seareching where to insert the data
if(key == root->data)return;//: This checks if the key to be inserted already exists in the tree. If it does, the function exits without inserting the key again.
else if(key<root->data)root = root->left;
else root = root->right;

}
// creating a new node for insertion.
TreeNode* newNode = new TreeNode(key);
// searching whether the data would be inserted as left child or right child.
if(key<prev->data){
    prev->left = newNode;//if the key's data is less than the current parent's data then go left(rule of binary search tree.
}
else{
    // else just insert the newNode in the right of the current parent
    prev->right = newNode;
}
}

    
int main()
{
    /*
          5
        /  \
      4    10
     /\    /\
    2  3  9 11 

    
    */
TreeNode *root = new TreeNode(5);
TreeNode *secondNode = new TreeNode(4);
TreeNode *thirdNode = new TreeNode(10);
TreeNode *fourthNode = new TreeNode(2);
TreeNode *fifthNode = new TreeNode(3);
TreeNode *sixthNode = new TreeNode(9);
TreeNode *seventhNode = new TreeNode(11);
 


int key = 13;

root->left = secondNode;
root->right = thirdNode;
secondNode->left =fourthNode;
secondNode->right =fifthNode;
thirdNode->left = sixthNode;
thirdNode->right = seventhNode;




insert(root, key);//working
cout << seventhNode->right->data << endl;




// now that everything is done, we can free up memory space in case nodes are no longer needed
delete root;
delete secondNode;
// and so on.
    return 0;
}