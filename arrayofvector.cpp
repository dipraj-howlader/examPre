#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int> &v){
    cout<<"size : "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<< " ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    vector<int> v[n]; // 10 vector

    for(int i=0;i<n;i++){
        int smallN;
        cin>>smallN;
        for (int j = 0; j < smallN; j++)
        {
            int x;
            cin>>x;
            v[i].push_back(x);
        }
        for(int i=0;i<n;i++){
    printVec(v[i]);
}
        
    } 


}