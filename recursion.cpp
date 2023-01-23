#include <bits/stdc++.h>
using namespace std;
int fun(int x, int y){
    if(x%y==0) 
    return y;
    return fun(y, x%y); 
}
int main(){
    int x,y;
    cin>>x>>y;
    int res = fun(x,y);
    cout<<res<<endl;
}