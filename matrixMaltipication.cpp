#include<bits/stdc++.h>
using namespace std;

int main(){
    int m1,n1,m2,n2;
    cin>>m1>>n1>>m2>>n2;
    if(n1==m2){
        int arr[m1][n1];
        int arr2[m2][n2];
       int newarr[m1][n2];
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                int x;
                cin>>x;
                arr[i][j]=x;
            }
            
        }
        
         for (int i = 0; i < m2; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                int x;
                cin>>x;
                arr2[i][j]=x;
            }
            
        }
        for (int i = 0; i < m1; i++)
        {
            for (int  j = 0; j < n2; j++)
            {
                newarr[i][j] = 0;
                for (int k = 0; k < n1; k++)
                {
                    int first = arr[i][k];
                    int sec = arr2[k][j];
                    newarr[i][j] = newarr[i][j]+ arr[i][k] * arr2[k][j]; 
                                    int ss = newarr[i][j];
                }
                
            }
            
        }
    for (int i = 0; i < m1; i++)
    {
        for (int  j = 0; j < n2; j++)
        {
            cout<<newarr[i][j]<< " ";
        }
        cout<<endl;
        
    }


    }
    else
    cout<<"It is not possible to Multy";
}