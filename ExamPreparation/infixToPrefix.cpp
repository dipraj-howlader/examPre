#include<bits/stdc++.h>
using namespace std;

int operators( char ch){
    if(ch=='^')
    return 3;
    else if(ch=='*' || ch=='/')
    return 2;
    else if(ch == '+' || ch == '-')
    return 1;
    else return -1;
}

int main(){

    string str;
    cin>>str;
    string expression ="";
    stack<char> st;
    for (int i = str.length()-1; i >=0 ; i--)
    {
        char ch = str.at(i);
        if((ch >='a' && ch<= 'z' ) || (ch>= 'A' && ch <='Z') || (ch >='0' && ch <= '9')){
            expression = ch + expression;
        }
        else if(ch==')'){
            st.push(')');
        }
        else if(ch=='('){
            while (st.top()!= ')')
            {
                expression = st.top() + expression;
                st.pop();
            }
            st.pop();  
        }
        else{
            while (!st.empty() && (operators(ch)<=operators(st.top())))
            {
                expression = st.top() + expression;
                st.pop();
            }
            st.push(ch);
        }
    }
    
    while (!st.empty())
    {
        expression = st.top() + expression;
        st.pop();
    }

    cout<<expression<<endl;    
}