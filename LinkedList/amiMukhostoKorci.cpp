#include<bits/stdc++.h>
using namespace std;

struct Link{
    int value;
    struct Link* again;
};
int main(){
struct Link* head = NULL;

head = (struct Link*)malloc(sizeof(struct Link));
int n;
cin>>n;
for (int i = 0; i < n; i++)
{
    int x ;
    cin>>x;
    struct Link * vari = NULL;
    vari =(struct Link*) malloc(sizeof(struct Link));
    head->value = x;
    head->again = vari;
    head = vari->again; 
}


struct Link* temp = head;
for (int i = 0; i < n; i++)
{
    cout<<temp->value<<endl;
    temp = temp->again;

}

}