#include<bits/stdc++.h>
using namespace std;

int main() {
        map<int, multiset<string>> m;
int t;
cin>>t;
while(t--){

    string name;
    int n;
    cin>>name>>n;
    m[n].insert(name);
}
auto c_it = --m.end();
while(true){
    auto &students = (*c_it).second;
    auto &marks = (*c_it).first;
    for(auto &student: students){
        cout<<student<< " "<< marks<<endl;
    }
    if(c_it==m.begin()) break;
    c_it--;
}


}