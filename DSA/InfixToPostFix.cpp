// Dipraj

#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define yes cout << /"YES" \
                 << "\n";
#define no cout << "NO" \
  << "\n";
#define ll long long int

int main()
{
    FAST_IO;
    set<int> operate = {42, 43, 45, 47, 94};
    stack<char> st;
    string str, expression = "";
    cin >> str;
    int len = str.length();
    st.push('(');
    for (int i = 0; i <=len && !st.empty(); i++)
    {
        if(i==len)
        {
            while (int(st.top()) != 40)
            {
                expression = expression + st.top();
                st.pop();
            }
            st.pop();
            break;            
        }
        int ch = int(str.at(i));
         if (ch == 40)
            st.push('(');

        else if (operate.find(ch) != operate.end())
        {

            int top = int(st.top());
            if (operate.find(top) != operate.end())
            {
                while ((top==94) || ((top == 42 || top == 47) &&(ch == 42 || ch == 47 || ch == 43 || ch == 45))|| ((ch == 43 || ch == 45)&&(top == 43 || top == 45)))
                {
                    expression = expression + st.top();
                    st.pop();
                    top = int(st.top());
                }
                st.push(str.at(i));
            }
            else
            {
                st.push(str.at(i));
            }
        }
        else if (ch == 41)
        {
            while (int(st.top()) != 40)
            {
                expression = expression + st.top();
                st.pop();
            }
            st.pop();
        }
          else
            expression = expression + str.at(i);
    }
    cout<<expression<<endl;
}

//Test Case
//K+L-M*N+(O^P)*W/U/V*T+Q
//(A+B)*(C+D)
//A+(B*C-(D/E^F)*G)*H
//5*(6+2)-1/4+(6^2)/2
//Q+T*V/U/W*(P^O)+N*M-L+K