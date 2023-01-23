#include<bits/stdc++.h>
using namespace std;
int main() {
    
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
    int location = 0;
    for(int i = 0 ;i<t; ++i){
        if(arr[i]==find)
        location = i+1;
    }
    cout<<location<<endl;
}