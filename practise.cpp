#include<bits/stdc++.h>
using namespace std;
void print(set<string> &m){
    for(string i: m){
        cout<<i<<endl;
    }
}
int main( ){
set<string> s;
s.insert("dipraj");
s.insert("sunraj");
s.insert("Dipraj");
s.insert("3");
print(s);


}