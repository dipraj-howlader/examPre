#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *left, *right;
};

Node* newNode(int data){
    Node* temp = new Node;
    temp->data = data;
    temp->left = NULL;
    temp->right =NULL;
    return temp;
}

void inorderTraverse(struct Node* node){
    if(node == NULL)
    return;

    inorderTraverse(node->left);
    inorderTraverse(node->right);
        cout<< node->data <<" ";
}

int main(){

    
struct Node* root = newNode(33);
root->left = newNode(3);
root->right = newNode(43);
root->left->left = newNode(34);
root->left->right = newNode(67);
root->right->right = newNode(45);
root->right->left = newNode(234);
inorderTraverse(root);

}