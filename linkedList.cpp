#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *node;
};
int main(){
struct Node* head  = NULL;
struct Node* second = NULL;
struct Node* third = NULL;
struct Node* four = NULL;

head = (struct Node*)malloc(sizeof(struct Node));
second = (struct Node*)malloc(sizeof(struct Node));
third = (struct Node*)malloc(sizeof(struct Node));
four = (struct Node*)malloc(sizeof(struct Node));

head->data = 1;
head->node = second;

second->data = 2;
second->node = third;

third->data = 3;
third->node = four;

four->data = 4;
four->node = NULL;

return 0;

}