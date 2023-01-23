// Dipraj

#include <bits/stdc++.h>
using namespace std;


int main()
{
     stack<char> st;
     stack<double> st2;
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

    len = expression.length();
    
     for (int i = len-1; i >=0 ; i--)
    {
        int index = int(expression.at(i));
        char ch = expression.at(i);
        double check = ch-'0';
        if(operate.find(index)!=operate.end()){
            double top1 = st2.top();
            st2.pop();
            double top2 = st2.top();
            st2.pop();
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
            st2.push(finally);
        }
        else
        st2.push(check);
    }
     cout<<st2.top()<<endl;
}
//5*(6+2)-1/4+(6^2)/2