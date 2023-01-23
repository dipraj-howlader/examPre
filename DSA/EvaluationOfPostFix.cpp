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
    set<int> operate = {42, 43, 45, 47, 94};
    stack<double> st;
    string str;
    cin>>str;
    int len = str.length();
    for (int  i = 0; i < len; i++)
    {
        int index = int(str.at(i));
        char ch = str.at(i);
        double check = ch-'0';
        if(operate.find(index)!=operate.end()){
            double top1 = st.top();
            st.pop();
            double top2 = st.top();
            st.pop();
            double finally = 0;
            if(index==42)
            {
            finally = top1 * top2;
            }
            else if(index == 43){
                finally = top1 + top2;
            }
            else if(index ==45){
                finally = top2 - top1;
            }
            else if(index ==47){
                finally = top2 / top1;
            }
            else
                finally = pow(top2, top1);
            st.push(finally);
        }
        else
        st.push(check);
    }
    cout<<st.top()<<endl;
}

//562+*14/-62^2/+
//57.75
//231*+9-
//-4