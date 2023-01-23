#include<bits/stdc++.h>
using namespace std;

int check_operator(char symbol)
{
  if(symbol == '^' || symbol == '*' || symbol == '/' ||  symbol == '+' || symbol =='-')
  {
    return 1;
  }
  else
  {
  return 0;
  }
}


string InfixToPrefix(stack<char> s, string infix)
{
    string expression;
int len=infix.size();
s.push(')');
     for (int i = len-1; (i >= -1) && !s.empty(); i--)
    {
                if(i<0)
        {
            while (s.top()!= ')')
            {
                expression =s.top() + expression;
                s.pop();
            }
            s.pop();
            break;
        }
        if(infix.at(i)==')')
        s.push(')');

        else if (check_operator(infix.at(i))==1)
        {
            char top = s.top();
            if (check_operator(top)==1)
            {
            while ((s.top()=='^' && (infix.at(i)=='*' || infix.at(i)=='+' ||infix.at(i)=='-' || infix.at(i)=='/')) || ((s.top()=='/' || s.top()=='*') && (infix.at(i)=='+' || infix.at(i)=='-')))
            {
                expression = s.top() +expression;
                s.pop();
                top= s.top();
            }
              s.push(infix.at(i));
            }
            else{
                s.push(infix.at(i));
            }
        }
         else if (infix.at(i) == '(')
        {
            while (s.top()!= ')')
            {
                expression = s.top() + expression ;
                s.pop();
            }
            s.pop();
        }

        else
            expression = infix.at(i) +expression;
    }
    return expression;
}

int main()
{
stack<char> stack;
    string infix, expression;

    cout << "Input a given  Infix Expression :" << endl;
    cin >> infix;
    expression = InfixToPrefix(stack, infix);
    cout << "PREFIX EXPRESSION: " << expression;

    return 0;
}
