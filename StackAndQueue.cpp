// Stack means LIFO , Last in first out 
// Queue means FIFO, First in first out
#include<bits/stdc++.h>
using namespace std;
int main() {
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(6);
    cout<<s.size();
    while (!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    
}