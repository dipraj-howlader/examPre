#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {2,3,4,5,6,7};
for (int i = 0; i < v.size(); i++)
{
    cout<<v[i]<< " ";
}
cout<<endl;
//declaring iterator it;
vector<int> :: iterator it = v.begin();
for ( it = v.begin(); it != v.end(); it++)
{
   cout<< (*it)<<" ";
}

// Iterator short c++;

// we can skip
// vector<int> :: iterator it by using "auto" keyword;

for (auto it = v.begin(); it != v.end(); it++)
{
   cout<< (*it)<<" ";
}
cout<<endl;
vector<vector<int>> vi;
vector<int> temp;
temp.push_back(50);
temp.push_back(3);
vi.push_back(temp);
temp.push_back(33);
vi.push_back(temp);
for(auto i: vi){
    for(auto j: i){
        cout<<j<<" ";
    }
    cout<<endl;
}


}