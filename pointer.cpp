#include<bits/stdc++.h>
using namespace std;
int main(){
    int var  = 20;
    int *ip;
    ip   = &var;
    cout<<ip<<endl;
    cout<<*ip<<endl;
    cout<<&*ip<<endl;
    cout<<*&*ip<<endl;

}