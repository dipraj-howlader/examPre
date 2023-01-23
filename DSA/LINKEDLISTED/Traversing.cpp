#include<bits/stdc++.h>
using namespace std;
struct Node {
   int value;
   struct Node *location;
};
struct Node* head = NULL;
void insert(int new_data) {
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   new_node->value = new_data;
   new_node->location = head;
   head = new_node;
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
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin>>x;
        insert(x);
    }
   cout<<"The linked list is: ";
   print();
}
//5
// 11 22 55 66 33 .

