#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, num;
    cin>>n>>num;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int beg = 0;
    int end = n-1;
    int mid = n/2;
    int loc = 0;
    bool check = false;

    while(arr[beg]<=arr[end]){
        if(num>arr[mid]){
            beg = mid+1;
        }
        else if(num<arr[mid]){
            end= mid - 1;
        }
        else {
            loc = mid;
            check = true;
            break;
        }
        mid  = (beg + end) / 2;
    }

if(check){
    cout<<"Number has found : "<<loc+1<<endl; 
}
else{
    cout<<"tr gf nai, number o nai!"<<endl;
}
}
// 15  26
//1 3 4 6 7 8 9 10 13 15 17 19 25 26 29