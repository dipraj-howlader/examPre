#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[100];
    int n, num;
    cin>>n>>num;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    bool check = false;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]==num)
        {
            check = true;
        }
        if(check){
            arr[i]= arr[i+1];
        }
    }

    for (int i = 0; i < n-1; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
}