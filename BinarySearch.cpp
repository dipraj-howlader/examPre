#include<bits/stdc++.h>
using namespace std;
int main( ) {
    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++)
    {
        int num;
        cin>>num;
        arr[i] = num;
    }
    int find;
    cin>>find;
    int low = 0;
    int high= t-1;
    int mid = (low+high) / 2;
    int position = 0;
    while(low<=high){
        if(arr[mid]==find)
        {
            position = mid+1;
            break;
        }
        if(find<arr[mid])
        {
            high = mid - 1;
        }
        else
        low = mid+1;
        mid = (low+high) / 2;
    }
    cout<<position<<endl;
}