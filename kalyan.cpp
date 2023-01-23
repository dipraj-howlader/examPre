#include<bits/stdc++.h>
using namespace std;
void multiply(int mat1[100][100],int N)
{
    int i, j, k,res[100][100];
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            res[i][j] = 0;
            for (k = 0; k < N; k++)
                res[i][j] += mat1[i][k] * mat1[k][j];
        }
    }

}
int main(){
int n,m;
cin>>n;
cin>>m;
/*
4 7
2 1
1 4
2 3
4 3
3 1
2 4
3 4
*/
int adj[100][100]={0},multi[100][100];
cout<<"Initialized array "<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<adj[i][j]<<" ";
    }
    cout<<endl;
}
cout<<"Enter value for u and v (Enter The adjacent nodes)"<<endl;
for(int i=0;i<m;i++){
    int u,v;
    cin>>u;
    cin>>v;
    adj[u][v]=1;
   // adj[v][u]=1;
}

cout<<endl;
cout<<"Matrix Representation is "<<endl;
for(int i=1;i<n+1;i++){
    for(int j=1;j<n+1;j++){
        cout<<adj[i][j]<<" ";
    }
    cout<<endl;
}
for(int i=1;i<n+1;i++){
    for(int j=1;j<n+1;j++){
        multi[i][j]=adj[i][j];
    }
}
for(int i=0;i<n-1;i++){
    multiply(multi,n);
}

}
