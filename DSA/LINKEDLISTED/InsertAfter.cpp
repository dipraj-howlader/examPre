#include<bits/stdc++.h>
using namespace std;
struct Node {
   int value;
   struct Node *location;
};
struct Node* head = NULL;
int valueThen = 0;
void insert(int new_data) {
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   new_node->value = new_data;
   new_node->location = head;
   head = new_node;
}
void insertAfter(Node* prev_node, int new_data)
{
 
    if (prev_node == NULL) {
        cout << "The given previous node cannot be NULL";
        return;
    }
 
    Node* new_node = new Node();
 
    new_node->value = new_data;
 
    new_node->location = prev_node->location;
 
    prev_node->location = new_node;
}
 
struct Node* InsertTheNode (int data) {
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      if(ptr->value==data)
      return ptr->location;
      else
      ptr = ptr->location;
   }
   return NULL;
}
void print() {
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->value <<" ";
      ptr = ptr->location;
   }
}
int main() {
    int t , nodeToInsert, nodeAfter ;
    cin>>t>>nodeAfter>>nodeToInsert;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin>>x;
        insert(x);
    }
    struct Node* requireNode = InsertTheNode(nodeAfter);
    insertAfter( requireNode , nodeToInsert);
   cout<<"The linked list is: ";
   print();
}
// 5 14 15
// 11 12 14 16 17