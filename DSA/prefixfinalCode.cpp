// Dipraj

#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define yes cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";
#define ll long long int

int main()
{
    FAST_IO;
    stack<char> st;
    set<int> operate = {42, 43, 45, 47, 94};
    string str, expression = "";
    cin>>str;
    int len = str.length();
     st.push(')');
    for (int i = len-1; (i >= -1) && !st.empty(); i--)
    {

        if(i<0)
        {
            while (int(st.top()) != 41)
            {
                expression =st.top() + expression;
                st.pop();
            }
            st.pop();
            break;            
        }
          int ch = int(str.at(i));
        if(ch==41)
        st.push(')');

        else if (operate.find(ch) != operate.end())
        {
            int top = int(st.top());
            if (operate.find(top) != operate.end())
            {
            while ((top==94 && (ch==42 || ch==43 || ch==45 || ch==47))|| ((top==47 || top==42) && (ch==43 || ch==45)))
            {
                expression = st.top() +expression;
                st.pop();
                top = int(st.top());
            }
              st.push(str.at(i));
            }
            else{
                st.push(str.at(i));
            }
        }
         else if (ch == 40)
        {
            while (int(st.top()) != 41)
            {
                expression = st.top() + expression ; 
                st.pop();
            }
            st.pop();
        }
        else
            expression = str.at(i) +expression;
    }
      cout<<expression<<endl;
}
//(A+(B*C)/D-(E^F)*G+H-(I/J))
//-+-+A/*BCD*^EFGH/IJ
//(A+B)*(C+D)
//A+B*C+D