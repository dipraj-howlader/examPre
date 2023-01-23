       #include<bits/stdc++.h>
       using namespace std;
       
    int love(char a ,char b){
        if(a=='(' && b==')')
        return 1;
        else if(a=='{' && b=='}')
        return 1;
        else if(a=='[' && b==']')
        return 1;
        else return 0;
    }

       int main(){ 
        string s = "()[]";
        stack<char> st;
        int check = 0;
        for(int i=0;i<s.length();i++){
            char ch = s.at(i);
            if(ch=='(' || ch=='{' || ch=='[')
                st.push(ch);
            else{
                int take = love(st.top(), ch);
                if(take==0)
                {
                check = 1;
                break;
                }
                else{
                    st.pop();
                }
                
            }
        }
        if(check ==0 && st.empty())
            cout<<"true"<<endl;
        else
            cout<<"false"<<endl;
       }