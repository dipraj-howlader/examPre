#include<bits/stdc++.h>
using namespace std;

int main(){
    int x1, y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if(y1==x2){
        int firstArr[x1][y1];
        int secondArr[x2][y2];
        for (int i = 0; i < x1; i++)
        {
            for (int j = 0; j < y1; j++)
            {
                cin>>firstArr[i][j];
            }
        }
        
            for (int i = 0; i < x2; i++)
        {
            for (int j = 0; j < y2; j++)
            {
                cin>>secondArr[i][j];
            }
        }
int mul[y1][x2] = {0};
    for (int i = 0; i < x1; i++)
    {
        for (int j = 0; j < y2; j++)
        {
            for (int k = 0; k < y1; k++)
            {
                mul[i][j] +=firstArr[i][k] * secondArr[k][j];
            }
        }
        
    }
    
    for (int i = 0; i < x1; i++)
    {
        for (int j = 0; j < y2; j++)
        {
            cout<<mul[i][j] << " ";
        }
        cout<<endl;
        
    }
    

    }
    else{
        cout<<"JA MARA KHA"<<endl;
    }
}