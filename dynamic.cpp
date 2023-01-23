#include<bits/stdc++.h>
using namespace std;

void print(int* arr, int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main( ){
    int n;
    cin>>n;
    int* arr  = new int(n);
    int *o = new int(4);
    cout<<*o<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>o[i];
    }
   print(o,n);
    
    
}