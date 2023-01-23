#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isOperator(char c) {
    if (c == '+' || c == '-' || c == '*' || c == '/') {
        return true;
    }
    return false;
}

int precedence(char c) {
    if (c == '+' || c == '-') {
        return 1;
    }
    if (c == '*' || c == '/') {
        return 2;
    }
    return 0;
}

string infixToPostfix(string infix) {
    stack<char> operators;
    string postfix = "";

    for (int i = 0; i < infix.length(); i++) {
        if (infix[i] == ' ' || infix[i] == ',') {
            continue;
        }
        else if (isOperator(infix[i])) {
            while (!operators.empty() && precedence(operators.top()) >= precedence(infix[i])) {
                postfix += operators.top();
                operators.pop();
            }
            operators.push(infix[i]);
        }
        else if (infix[i] == '(') {
            operators.push(infix[i]);
        }
        else if (infix[i] == ')') {
            while (!operators.empty() && operators.top() != '(') {
                postfix += operators.top();
                operators.pop();
            }
            operators.pop();
        }
        else {
            postfix += infix[i];
        }
    }

    while (!operators.empty()) {
        postfix += operators.top();
        operators.pop();
    }

    return postfix;
}

int main() {
    string infix = "a+b*c+(d*e+f)*g";
    cout << infixToPostfix(infix) << endl;
    return 0;
}
