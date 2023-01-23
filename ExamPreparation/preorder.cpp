#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
};

void preOrderTraveres(struct Node* node){
    if(node ==NULL)
    return;

    cout<<node->data <<" ";
    preOrderTraveres(node->left);
    preOrderTraveres(node->right);
}

Node* newNode (int data){
    Node* temp = new Node;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

int main(){
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    preOrderTraveres(root);


}