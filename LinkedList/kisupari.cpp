#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node * node;
};
int main(){
    struct Node * head = NULL;
    struct Node* first = NULL;
    struct Node* second = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    first = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;
    head->node = first;

    first->data =  2;
    first->node = second;
    

    }