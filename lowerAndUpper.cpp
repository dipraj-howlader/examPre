#include<bits/stdc++.h>
using namespace std;

int main() {
    // int n;
    // cin>>n;
    set<int> s;
    for (int i = 0; i < (int)(1e6); i++)
    {
        // int x;
        s.insert(rand());
    }
    for (int i = 0; i < (int)(1e6); i++)
    {
           auto it = s.lower_bound(rand());
               cout<< *it<< endl;
    }


    
}