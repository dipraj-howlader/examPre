//Dipraj howlader

#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node *left, *right;
};

Node* newNode(int data)
{
	Node* temp = new Node;
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

void inorderArrange(struct Node* node) //using recursion
{
	if (node == NULL) // backtracking
		return;

    cout << node->data << " ";
	inorderArrange(node->left);
	inorderArrange(node->right);
}

int main()
{
	cout<<"Please enter 5 nodes :\n";
	int n=5;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	
	struct Node* root = newNode(arr[0]);
	root->left = newNode(arr[1]);
	root->right = newNode(arr[2]);
	root->left->left = newNode(arr[3]);
	root->left->right = newNode(arr[4]);



	cout << "\nPreorder traversal of binary tree is \n";
	inorderArrange(root);


	return 0;
}
