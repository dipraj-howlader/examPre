#include<bits/stdc++.h>
using namespace std;

int main(){
    /*
    7 1234
    1 3 77 89 100 123 245
    */
    int n, number;
    cin>>n>>number;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int start = 0, end = n-1;
    int mid = (start+end) / 2;

    while (start<=end)
    {
        if(number >arr[mid]){
            start  = mid+1;
        }
        else if(number < arr[mid]){
            end = mid-1;
        }
        else 
        {
            cout<<"YOU GOT THE NUMBER \n";
            break;
        }
        mid = (start + end) / 2;
    }
    
}