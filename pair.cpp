#include<bits/stdc++.h>
using  namespace std;
int main(){
    pair<int,int> pair_arr[3];
    pair_arr[0] = {1,4};
    pair_arr[1] = {2,5};
    pair_arr[2] = {3,6};

    for(int i =0;i<3;i++){
        cout<<pair_arr[i].first<< " "<<pair_arr[i].second<<endl;
    }
    swap(pair_arr[0],pair_arr[2]);
    cout<<endl;
        for(int i =0;i<3;i++){
        cout<<pair_arr[i].first<< " "<<pair_arr[i].second<<endl;
    }

}