#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int arr[100];
    int size, num, pos;
    cout<<"enter the size of the array:"<<endl;
    cin>>size>>pos>>num;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Before inserting the number"<<endl;

    if(pos<0 || pos>size+1)
    {
        cout<<"Enter new";
    }
    else{
        for (int i = size; i >= pos; i--)
        {
            arr[i] = arr[i-1];
        }
        
        arr[pos-1] = num;
    }
    
    for (int i = 0; i < size+1; i++)
    {
        cout<<arr[i]<<" ";
    }
    

}