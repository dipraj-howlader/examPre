#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[100];
    int size, pos, number;
    cin>>size>>pos;

    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
cout<<endl;
cout<<endl;
    if(pos<0 || pos >size+1){
        cout<<"Error"<<endl;
    }
    else{
        for (int i = pos-1; i < size-1; i++)
        {
            arr[i] = arr[i+1];
        }
        size--;
        
    }

    for (int i = 0; i < size; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
    

}