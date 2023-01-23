#include<bits/stdc++.h>
using namespace std;
string str = "";
string finalStr = "";
//recursive function
string binary(int n){
    if(n==0) return "0";
    if(n==1) {
        str = "1";
        return str;
    }
    string x =  binary(n/2);
    int y =n%2;
    str = str+to_string(y);
    return  str;
}
int main()
{
string x;
cin>>x;
reverse(x.begin(), x.end());
int len = x.length();
len = pow(2, len);
for (int  i = 0; i < len; i++)
{
        string binaryString = binary(i);
        reverse(binaryString.begin(), binaryString.end());
       int binarylen = binaryString.length();
        for (int j = binaryString.length()-1; j >=0; j--)
        {
            char c = binaryString.at(j);
            char d = x.at(j);
            if(c=='1')
            cout<<d;
        }
        cout<<endl;
}
}