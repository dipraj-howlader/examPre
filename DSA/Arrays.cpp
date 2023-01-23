// Dipraj

#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define yes cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";
#define ll long long int
int lengthOfLongestConsecutiveSequence(vector<int> arr, int n) 
{
    unordered_set<int> exit;
    for (int i = 0; i < n; i++)
    {
        exit.insert(arr[i]);
    }
    int count =0 ;
    int high = 1;
    for (int i = 0; i < n; i++)
    {
        int start = arr[i];
        if(exit.find(start-1)!=exit.end()) 
        continue;
        while (exit.find(start)!=exit.end())
        {
            start++;
        }
        count = start-arr[i];
        if(count>high) high = count;
    }
    return high;
}
int main()
{
    FAST_IO;
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        a[i] = x;
    }
    int leng = lengthOfLongestConsecutiveSequence(a, n);
    cout<<leng<<endl;

}