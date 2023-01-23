#include<bits/stdc++.h>
using namespace std;
void print(set<string> &m){
    for(string i: m){
        cout<<i<<endl;
    }
}
int main(){
 set<string> s;

s.insert("ABC");
s.insert("ABC");
s.insert("DEF");
s.insert("BVD");

auto it = s.find("ABC");
if(it!=s.end()){
cout<<*it<<endl;

// s.erase("ABC");
}

print(s);
vector<int> a;
for (int i = 0; i < 4; i++)
{
    int ss;
    cin>>ss;
    a.push_back(ss);
}

for(int i:a)
cout<<i<< " ";
cout<<endl;
set<int> aa;
for (int i = 0; i < 6; i++)
{
    int ae;
    cin>>ae;
    aa.insert(ae);
}

for(auto i:aa){
    cout<<i<< " ";
}


}