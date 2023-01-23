#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *left, *right;
};
Node* NewNode(int data){
    Node* temp = new Node;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

int find(struct Node* node, int number){
    if(node==NULL) return 0;
    else if(node->data == number)
    return number;
    else if(node->data <number){
        return find(node->left , number);
    }
    else 
    return find(node->right, number);
}
struct Node* insert(struct Node* node, int data){
    if(node==NULL) 
    return NewNode(data);
    else if(node->data > data)
    node->left = insert(node->left ,  data);
    else 
    node->right = insert(node->right, data);

    return node;
}

void inorder(struct Node* node){
    if(node==NULL) return;

    inorder(node->left);
    cout<<node->data<< " ";
    inorder(node->right);
}

int main(){
    
    struct Node* root = NULL;
    root = insert(root, 12);
    root = insert(root, 24);
    root = insert(root, 18);
    root = insert(root, 6);
    root = insert(root, 5);
    root = insert(root, 7);

    inorder(root);

    if(find(root,6)==6)
    cout<<"NODE EXIST";
    else if(find(root, 6)==0)
    cout<<"THERE IS NO NODE";
}