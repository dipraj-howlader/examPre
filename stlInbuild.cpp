#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    //minimun element
    auto it =  min_element(v.begin(), v.end());
    //max element
    auto it2 = max_element(v.begin(), v.end());
    // accumulate
    int sum = accumulate(v.begin(),v.end(),0);
    //count, how much element in the array have
    int ct = count(v.begin(), v.end(),6);
    // find , to finding element
    auto fi = find(v.begin(),v.end(), 20);
    // string reverse
    reverse(v.begin(), v.end());
    // 

    cout<< *it<< endl;
    cout<< *it2<< endl;
    cout<< sum <<endl;
    cout<< ct <<endl;
    if(fi!=v.end())
    cout<< *fi <<endl;
    else
    cout<<"Element no found"<<endl;
    for(int i: v){
        cout<< i << " ";
    }
    cout<< endl;
}
//Time compli0xty O(n)