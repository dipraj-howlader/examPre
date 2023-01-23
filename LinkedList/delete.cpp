#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node * link;
};

void insertLast(node * header, int data){
    node * ptr = header;
    node* newNode = (node*)malloc(sizeof(node));
    while (ptr->link!=NULL)
    {
        ptr= ptr->link;
    }
    newNode->data = data;
    newNode->link=ptr->link;
    ptr->link = newNode;
    
}

void deleteNode(node* header, int index){
    if(header->link == NULL) return;
    node * ptr = header;
    for (int i = -1; i < index-1 && ptr->link!=NULL ; i++)
    {
        ptr= ptr->link;
    }
    node* temp = ptr->link->link;
    free(ptr->link);
    ptr->link= temp;
}
 

int main(){
    node * header = (node*)malloc(sizeof(node));
    header->data = INT_MAX;
    header->link = NULL;
    int n;
    cin>>n;
    for (int i = 0; i < n+1; i++)
    {
        insertLast(header, i+1);
    }

    deleteNode(header ,  3);

    node * temp = header;
    temp=temp->link;
    while(temp->link!=NULL){
        cout<<temp->data<<" ";
        temp = temp->link;
    }
    cout<<endl;


}