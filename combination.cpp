#include<bits/stdc++.h>
using namespace std;
int combi(int n ,int r){
    if(r==n) return 1;
    if(r==1) return n;
    return combi(n+1, r) - combi(n, r-1);
}
int main(){
    int n,r;
    cin>>n>>r;
    int x = combi(n,r);
    cout<<x;
}