#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n+1];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        int ptr = i-1;
        while (temp<arr[ptr] && ptr>=0)
        {
            arr[ptr+1] = arr[ptr];
            ptr--;
        }
        arr[ptr+1] = temp;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}