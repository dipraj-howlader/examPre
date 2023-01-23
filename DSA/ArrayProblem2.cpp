// Dipraj

#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define yes cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";
#define ll long long int


int findMajorityElement(int arr[], int n) {
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    int check = 0;
    int high = 0;
    for (auto it = mp.begin(); it !=mp.end(); it++)
    {
        if((*it).second>check)
        {
            check = (*it).second;
            high = (*it).first;
        }
    }
    if(check > (n/2)) return high;
    return -1;
}

int main()
{
    FAST_IO;
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        arr[i] = x;
    }
    int p = findMajorityElement(arr, n);
    cout<<p<<endl;
}