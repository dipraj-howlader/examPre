#include<bits/stdc++.h>
using namespace std;

void radixSortCount(int arr[] , int n, int place){
    const int max = 10;
    int count[max];
    int output[n];

    for (int i = 0; i < max; i++)
    {
        count[i] = 0;
    }
    
    for (int i = 0; i < n; i++)
    {
        count[(arr[i]/place)%10]++;
    }
    
    for (int i = 1; i < max; i++)
    {
        count[i]+=count[i-1];
    }
    
    for (int i = n-1; i >=0; i--)
    {
        output[count[(arr[i]/place)%10]-1] = arr[i];
        count[(arr[i]/place)%10]--;
    }
    
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
    

}

int main(){
    int n;
    cin>>n;
    int arr [ n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max){
            max = arr[i];
        }
    }
    for (int i = 1; max/i>0; i=i*10)
    {
       radixSortCount(arr, n, i);
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    
    
}