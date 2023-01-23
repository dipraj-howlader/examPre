#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int number, min;
        cin>>number>>min;
        multiset<long long> bags;
        for (int i = 0; i < number; i++)
        {
            long long candy_cnt;
            cin>>candy_cnt;
            bags.insert(candy_cnt);
        }
        
    long long totalCandies = 0;
    for (int i = 0; i < min; i++)
    {
        auto last_it = (--bags.end());
        long long candy_cnt = *last_it;
        totalCandies+=candy_cnt;
        bags.erase(last_it);
        bags.insert(floor(candy_cnt/2));
    }
    cout<<totalCandies<<endl;
    

    }
}