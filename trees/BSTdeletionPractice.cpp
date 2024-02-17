#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;

    node(int value): data(value), left(nullptr), right(nullptr){};
    
};

node* inPre(node* Node){
    Node = Node->left;

    while(Node->right != nullptr){
      Node = Node->right;
    }
    return Node;
}

void inorder(node *root){
    if(root){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}



node* deleteNode(node* root, int key){
node *temp;
// base condition 
if(!root){
    cout << "invalid tree" << endl;
    return nullptr;
}
else if(key < root->data){
    root->left = deleteNode(root->left, key);
}
else if(key > root->data){
    root->right = deleteNode(root->right, key);
}
// when we have  found the node to be deleted

else{

if(root->left != nullptr && root->right != nullptr){

node* iPre = inPre(root);
root->data = iPre->data;
root->left = deleteNode(root->left, root->data);
}


else{
if(!root->left){
    
    temp = root->right;
    delete root;
    return temp;
}
else {
    temp = root->left;
    delete root;
    return temp;
}
}
delete temp;
return root;
}

}
int main(){
    
    /*
      5
    /  \
  3    10
 /\    /\
2  4  9 11
            
// 2, 3, 4, 5, 9, 10, 11

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

inorder(root);
cout << "" << endl;
deleteNode(root, root->data);
inorder(root);
    return 0;
}