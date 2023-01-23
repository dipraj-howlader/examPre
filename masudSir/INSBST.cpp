#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root;

void insert(int item)
{
    struct node *ptr, *parentptr, *nodeptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("can't insert");
    }
    else
    {
        ptr->data = item;
        ptr->left = NULL;
        ptr->right = NULL;
        if (root == NULL)
        {
            root = ptr;
            root->left = NULL;
            root->right = NULL;
        }
        else
        {
            parentptr = NULL;
            nodeptr = root;
            while (nodeptr != NULL)
            {
                parentptr = nodeptr;
                if (item < nodeptr->data)
                {
                    nodeptr = nodeptr->left;
                }
                else
                {
                    nodeptr = nodeptr->right;
                }
            }
            if (item < parentptr->data)
            {
                parentptr->left = ptr;
            }
            else
            {
                parentptr->right = ptr;
            }
        }
        printf("Node Inserted");
    }
}

void inorderArrange(struct node* node) //using recursion
{
	if (node == NULL) // backtracking
		return;

    cout << node->data << " ";
	inorderArrange(node->left);
	inorderArrange(node->right);
}

int main()
{
    int choice, item;
    do
    {
        printf("\nEnter the item which you want to insert?\n");
        cin>>item;
        insert(item);
        printf("\nPress 0 to insert more ?\n");
        cin>>choice;
    } while (choice == 0);
    //printing in Preorder
    cout<<"\n Printing Preorder: \n";
    inorderArrange(root);

}
/*
38 56 14 12 8 23 18 20 45 82 70
*/