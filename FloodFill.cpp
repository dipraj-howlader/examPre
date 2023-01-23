// Dipraj

#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define yes cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";
#define ll long long int


void isFill(int i, int j){
// cant solved it
}

int main()
{
    FAST_IO;
    int i,j;
    cin>>i>>j;
    int count=0;
    int arr[i][j];
    int check[i][j]= {0};
    for (int row = 0; row < i; row++)
    {
        for (int  colum = 0; colum < j; colum++)
        {
            cin>>arr[row][colum];
        }
        
    }
    for (int row = 0; row < i; row++)
    {
        for (int colum = 0; colum < j; colum++)
        {
            if(arr[row][colum]=='@' && check[row][colum]==0){
                count++;
                isFill(row, colum);
            }
        }
        
    }
    
}