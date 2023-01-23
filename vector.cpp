#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main( ){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    printVec(v);

    vector<int> v1(10,2);
    v1.push_back(3);
    printVec(v1);
    v1.pop_back();
    printVec(v1); // 0(1);


    vector<int> v3 = v1; //0(n);
v3.push_back(5);
printVec(v3);
}