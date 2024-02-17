#include <bits/stdc++.h>
#include <iostream>
using namespace std;


struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int value): data(value), left(nullptr), right(nullptr){};
};

void insert(TreeNode* root, int key){
TreeNode *prev = nullptr;


while(root != nullptr){
prev = root;//keeps a track of our root for each iteration so that we can retreive the last root wehre there is not left or right children

if(key == root->data) return;
else if(key< root->data) root = root->left;
else root = root->right;

}
TreeNode *newNode = new TreeNode(key);
if(key< prev->data){
    prev->left= newNode;
}
else prev->right = newNode;

}
int main(){
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
 
root->left = secondNode;
root->right = thirdNode;
secondNode->left =fourthNode;
secondNode->right =fifthNode;
thirdNode->left = sixthNode;
thirdNode->right = seventhNode;


int key = 13;

// lest insert the key using the insert function
insert(root, key);
cout << sixthNode->right->data << endl;

    return 0;
}