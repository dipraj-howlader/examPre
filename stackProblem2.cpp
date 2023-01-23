// Dipraj
//have to rewrite again
#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define yes cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";
#define ll long long int;

vector<int> NGE(vector<int> v){
    vector<int> nge(v.size());
    stack<int> st;
    for (int i = 0; i < v.size(); i++)
    {
        while (!st.empty() && v[i]> v[st.top()])
        {
            nge[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        nge[st.top()] = -1;
         st.pop();
    }
    return nge;
    
}

int main()
{
    FAST_IO;
    int t;
    cin>>t;
    vector<int> v(t);
    for (int i = 0; i < t; i++)
    {
        cin>> v[i];
    }   
    vector<int> nge  = NGE(v);
        
    for (int i = 0; i < t; i++)
    {
        cout<< (nge[i]==-1? -1 : v[nge[i]]) << " ";
    }
    
    cout<<endl;
}