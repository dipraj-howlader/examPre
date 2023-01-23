#include<bits/stdc++.h>
using namespace std;
//time complexity log(n);
void print(map<int,string> &m){
    cout<< m.size()<<endl;
    for(auto &i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
}
int main(){
    //maps
    //unordered maps
   map<string, int> umap;
  
    // inserting values by using [] operator
    umap["GeeksforGeeks"] = 10;
    umap["Practice"] = 20;
    umap["Contribute"] = 30;
    // Traversing an unordered map
    for(auto i = umap.rbegin() ;i!=umap.rend();){
        cout<<i->first<<" "<<i->second<<endl;
       i++;
    }
}