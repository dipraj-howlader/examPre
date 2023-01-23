#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* link;
};
void insertFront(node *header,  int data);
void insertLast(node *header,  int data);
void insertAt(node *header,  int data, int index);
void insertBeforeValue(node *header,  int data, int value);
int main(){
    node  * header;
    header = (struct node*)malloc(sizeof(node));

    if(header == NULL){
        cout<<"memory is not allocated"<<endl;
        return 0;
    }

    header->data = INT_MAX;
    header->link=NULL;

    int n;
    cin>>n;
    int number = 0;
    for (int i = 0; i < n; i++)
    {
        insertLast(header, number);
        number++;
    }
    insertAt(header, 10, 4);
    insertBeforeValue(header, 69, 4);
struct node* temp = header;
    temp = temp->link;
for (int i = 0; i < n+1; i++)
{
    cout<<temp->data<<endl;
    temp = temp->link;

}

}


void insertFront(node *header,  int data){
    node *newNode = (node*)malloc(sizeof(node));
    newNode->data = data;
    newNode->link =header->link;
    header->link = newNode;
}

void insertLast(node *header,  int data){
    node *ptr =header;
    node *newNode = (node*)malloc(sizeof(node));
    while (ptr->link!=NULL)
    {
        ptr = ptr->link;
    }
    newNode->data = data;
    newNode->link = ptr->link;
    ptr->link= newNode;
}

//headnode n1 n2 n3 data n4 n5 
void insertAt(node *header,  int data, int index){
    node *ptr = header;
    node* newNode = (node*)malloc(sizeof(node));
for (int i = 0; i < index-1; i++)
{
    ptr= ptr->link;
}
newNode->data = data;
newNode->link = ptr->link;
ptr->link = newNode;
    
}

void insertBeforeValue(node *header,  int data, int value){
    node * ptr = header;
    node * newNode = (node*)malloc(sizeof(node));
    while(ptr->data!=value){
        ptr = ptr->link;
    }
    newNode->data = data;
    newNode->link = ptr->link;
    ptr->link = newNode;

}