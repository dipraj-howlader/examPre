#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int graph[N][N]= {0},mult[N][N],a[N][N],b[N][N];
int main(){
int n,m;
cin>>n>>m;
for(int i=1;i<=m;i++){
int v1,v2;
cin>>v1>>v2;
graph[v1][v2]=1;
}
/*
4 7
1 4
2 1
2 3
2 4
3 1
3 4
4 3
*/
cout<<"The nodes are stored in memory in a linear array ="<<endl;
   for(int i = 1; i <=n; i++) {
      for(int j = 1; j <=n; j++) {
         cout << graph[i][j] << " ";
         a[i][j]=graph[i][j];
         b[i][j]=graph[i][j];
      }
      cout << endl;
   }
   cout<<"A ="<<endl;
   for(int i = 1; i <=n; i++) {
      for(int j = 1; j <=n; j++) {
         cout << a[i][j] << " ";
      }
      cout << endl;
   }
   cout<<" B="<<endl;
   for(int i = 1; i <=n; i++) {
      for(int j = 1; j <=n; j++) {
       cout<<b[i][j]<<" ";
      }
      cout << endl;
   }
   for(int i = 1; i <=n; ++i)
        for(int j = 1; j <=n; ++j)
        {
            mult[i][j]=0;

        }

      for(int i = 1; i <=n; ++i){
        for(int j = 1; j <=n; ++j){
            for(int k = 1; k <=n; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }
             cout << mult[i][j] << "\t";
        }

        cout << endl;
    }

}

