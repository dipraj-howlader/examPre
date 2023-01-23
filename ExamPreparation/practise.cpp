#include<bits/stdc++.h>
using namespace std;

int partition(int arr[] , int beg , int end){

    int pivot = arr[beg];
    int count = 0;
    for (int  i = beg+1; i <= end; i++)
    {
        if(pivot>=arr[i])
        count++;
    }

    int pivotPoint = count + beg;
    swap(arr[beg], arr[pivotPoint]);

    int i = beg, j = end;       
    while (i<pivotPoint && j> pivotPoint)
    {
        while (arr[i]<=pivot)
        {
            i++;
        }
        while (arr[j]>pivot)
        {
            j--;
        }

        if(i<pivotPoint && j> pivotPoint){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    
    return pivotPoint;

}

void quickSort(int arr[] , int beg , int end){

    if(beg>=end)
    return ;

    int pivot = partition(arr, beg , end);

    quickSort(arr, beg, pivot-1);

    quickSort(arr, pivot+1, end);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    quickSort(arr, 0,n-1);
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<< " ";
    }
    
    
}