#include<bits/stdc++.h>
using namespace std;

void prinst(int arr[] , int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl; 
}
int main(){
    int arr[100];
    int size, pos ,item;
    cin>>size>>pos>>item;

    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Before entering the value: \n";
    prinst(arr, size);

    size = size+1;
    for (int i =size; i >= pos; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos-1] = item;
    cout<<"After the case \n";
    prinst(arr, size);
    
}