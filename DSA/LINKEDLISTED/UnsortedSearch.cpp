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
bool search(int item) {
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      if(ptr->value==item)
      return true;
      else
      ptr = ptr->location;
   }
   return false;
}
int main(){
 int t, item;
    cin>>t>>item;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin>>x;
        insert(x);
    }
    bool isPresent = search(item);
    if(isPresent)
    cout<<"YES";
    else 
    cout<<"FALSE";
}
//5 14
// 11 55 66 99 33