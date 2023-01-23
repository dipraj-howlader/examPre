#include<bits/stdc++.h>
using namespace std;
int main(){
    // 1. inbuilt implementation
    // 2. Time Complexity
    // 3. Vlaid Keys datatypes

    unordered_map<int, string> m;
        m[1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";
    m.insert({4,"agd"});
    cout<< m.size()<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
}