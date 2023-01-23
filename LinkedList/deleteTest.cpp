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
    node* temp = header;
    int count=-1;
    while (count<index-1&& temp->link!=NULL )
    {
        temp = temp->link;
        count++;
    }
    node * ptr = temp->link->link;
    free(temp->link);
    temp->link = ptr;
}

void deleteValue(node * header, int value){
    node * ptr = header;
    while(ptr->link->data!=value && ptr->link->link!=NULL){
        ptr = ptr->link;
    }
    node * temp = ptr->link->link;
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

    // deleteNode(header ,  3);
    deleteValue (header, 45);
    node * temp = header;
    temp=temp->link;
    while(temp->link!=NULL){
        cout<<temp->data<<" ";
        temp = temp->link;
    }
    cout<<endl;


}