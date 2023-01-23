// Dipraj

#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define yes cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";
#define ll long long int;
unordered_map<char,int> symbols = { {'[',-1},{'{',-2},{'(',-3},{']',1},{'}',2},{')',3}};
string isBalanced(string s) {
    stack<char> st;
    for(char brac:s){
        if(symbols[brac]<0)
        {
            st.push(brac);
        }
        else{
            if(st.empty()) return "NO";
            char top = st.top();
            st.pop();
            if(symbols[top]+symbols[brac]!=0) return "NO";

        }
    }
    if(st.empty()) return "YES";
    return "NO";

}


int main()
{
    FAST_IO;
    int t;
    cin>>t;
    while (t--)
    {
        string str;
        cin>>str;
       cout<< isBalanced(str)<< endl;
    }
    
}