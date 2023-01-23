#include<bits/stdc++.h>
using namespace std;
int bigMod(int a, int b, int m){
// 5 17 7
if(b==1) return a%m;
else if(b%2==1) 
{
    int y = bigMod(a,b-1,m);
    y = (y*a) %m;
    return y;
}
else{
    int x = bigMod(a,b/2,m);
    x = (x*x)%m;
    return x;
}
}
int main(){
    int a, b,m;
    cin>>a>>b>>m;
    int x = bigMod(a,b,m);
    cout<<x<<endl;
}