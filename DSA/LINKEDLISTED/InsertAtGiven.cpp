#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};
// struct Node
// {
//   int data;
//   Node *next;
//   Node(int x)
//   {
//     data = x;
//     next = NULL;
//   }
// };

void printList(Node* node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}

Node *INSLOC(Node *START, int ITEM, int LOC)
{
  Node *NEW = new Node(ITEM);
  if (LOC == 1)
  {
    NEW->next = START;
    return NEW;
  }

  Node *curr = START;
  for (int i = 1; i <= LOC - 2 && curr != NULL; i++)
    curr = curr->next;

  if (curr == NULL)
    return START;

  NEW->next = curr->next;
  curr->next = NEW;

  return START;
}
void push(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main()
{
      Node* head = NULL;
      int t, deletePosition,deleteItem;
    cin>>t>>deleteItem;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin>>x;
        push(&head, x);
    }
  printList(head);
  head = INSLOC(head,deleteItem,deletePosition);
  printList(head);
  return 0;
}