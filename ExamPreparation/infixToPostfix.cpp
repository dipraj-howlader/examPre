#include<bits/stdc++.h>
using namespace std;

int prec(char ch){
    if(ch=='^')
    return 3;
    else if(ch=='/' || ch=='*')
    return 2;
    else if(ch=='+' || ch=='-')
    return 1;
    else return -1;
}

int main(){
    string str;
    cin>>str;
    string expression="";
    stack<char> st;
    for (int i = 0; i < str.length(); i++)
    {
        char position = str.at(i);
        if((position >= 'a' && position <='z') || (position >= 'A' && position <='Z')|| (position >= '0' && position <='9')){
            expression =expression + position;
        }
        else if(position=='('){
            st.push('(');
        }
        else if(position==')'){
            while (st.top()!='(')
            {
                expression = expression+st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while (!st.empty() && prec(position) <= prec(st.top()))
            {
                expression = expression + st.top();
                st.pop();
            }
            st.push(position);
            
        }

    }
    while (!st.empty())
    {
        expression = expression + st.top();
        st.pop();
    }
    cout<<expression<<endl;
    

}