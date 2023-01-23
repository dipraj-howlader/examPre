// Dipraj

#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> operate = {42, 43, 45, 47, 94};
    stack<double> st;
    string str;
    cin>>str;
    int len = str.length();
    for (int i = len-1; i >=0 ; i--)
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
                finally = top1 - top2;
            }
            else if(index ==47){
                finally = top1 / top2;
            }
            else
                finally = pow(top1, top2);
            st.push(finally);
        }
        else
        st.push(check);
    }
     cout<<st.top()<<endl;
}
//-+7*45+20
//8
//-+8/632
//25
//+-*5+62/14/^622