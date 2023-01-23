#include<bits/stdc++.h>
using namespace std;
//comparator function
// bool should_i_swap(int a,int b){
    
//     if(a>b)
//     return true;
//     return false;
// }

bool should_i_swap(pair<int,int> a, pair<int,int>  b){
    if(a.first != b.first){
    return a.first < b.first;
    }

    return  b.second <  a.second;
     
}
// bool sww(pair<int,int> a, pair<int,int>  b){

// }

int main(){
    int n;
    cin>>n;
vector<pair<int ,int> >a(n);
    for (int i = 0; i < n; i++)
    {
        cin>> a[i].first>>a[i].second;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i+1; j < n; j++)
    //     {
    //         if(should_i_swap(a[i],a[j])){
    //             swap(a[i],a[j]);
    //         }
    //     }
        
    // }

    sort(a.begin(),a.end(), greater<pair<int ,int>>());

    cout<<endl;
    cout<<endl;
for (int  i = 0; i < n; i++)
{
    cout<<a[i].first<<" "<<a[i].second<<endl;
}

}