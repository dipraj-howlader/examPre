#include <bits/stdc++.h>
using namespace std;

void multiplication(int **arr, int **arrCopy, int n)
{
    int arrDoul[n][n];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            int temp = 0;
            for (int k = 0; k < n; ++k)
            {
                temp += arr[i][k] * arrCopy[k][j];
            }
             arrDoul[i][j] = temp;
        }
    }
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = arrDoul[i][j];
        }
        
    }
    
}

void print(int** arr, int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void ArraySum (int** arr , int** sum, int n){
    for ( int i = 0; i < n; i++)
    {
        for (int  j = 0; j < n; j++)
        {
            sum[i][j]+=arr[i][j];
        }
        
    }  
}
int main()
{
    int n,edge;
    cout << "Enter node and edge : " << endl;
    cin >> n>>edge;
    int arrFirst[n][n]={0};  
    for (int i = 0; i < edge; i++)
    {
            int x,y;
            cin>>x>>y;
            arrFirst[x][y] = 1;   
    }
    int** sum = new int*[n];
    int **arr = new int *[n];
    int **arrCopy = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        arrCopy[i] = new int[n];
        sum[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            if(arrFirst[i][j]==1)
            arr[i][j] = 1;
            else 
            arr[i][j] = 0;
            arrCopy[i][j] = arr[i][j];
            sum[i][j] = arr[i][j];
        }
    }
    cout<<endl;
    cout<<endl;
//code starts from here
cout<<"Graph resprestation using 2D array :"<<endl;
print(arr,n);
cout<<endl;
    for (int  i = 0; i < n-1; i++)
    {
        multiplication(arr, arrCopy, n); // calling the mul function
        if(i==0){
            cout<<"Value of A^2 :"<<endl;
            print(arr, n); 
        }
        ArraySum(arr, sum, n); // array sum function
    }
    cout<<endl;
    cout<<"Value of B4 : "<<endl;
    print(sum, n);// print fucntion
    cout<<endl;
    int count = 0;
    cout<<"Path represting using matrix: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(sum[i][j]!=0){
                cout<<1<< " ";
                count++;
            }
            else{
                cout<<0<< " ";
            }
        }
        cout<<endl;

    }
            cout<<"Total path: "<<count<<endl;
}
/*
4 7
 0 3 
1 0 
1 2
1 3
2 0 
2 3 
 3 2
 */