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

    for (int i = n+1; i >= 0; i--)
    {
        if(arr[i-1]>num)
        {
            arr[i]=arr[i-1];
        }
        else{
            arr[i] = num;
            break;
        }
    }
    
    for (int i = 0; i < n+1; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}