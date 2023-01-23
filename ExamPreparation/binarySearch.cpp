#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,find;
    cin>>n>>find;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

int start = 0, end = n-1; 
int mid = (start+end)/2;
int check = 0;
while (start<=end)
{
    if(arr[mid]<find)
    {
        start = mid+1;
    }
    else if(arr[mid]>find){
        end = mid-1;
    }
    else {
    check = 1;
    break;}
    mid  = (start+end)/2;
}
if(check==1)
cout<<"Number has found"<<endl;
else 
cout<<"VAG TUI";

    
}