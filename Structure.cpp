#include<bits/stdc++.h>
using namespace std;
int main(){
    struct st_record
    {
        string name;
        int roll;
        struct ac
        {
            string father_name;
        };
        
    };
    struct st_record st1 = {"Dipraj",1};
    struct st_record st2 = {"Rahul",2};
    struct st_record st3 = {"Rabbi",3};
cout<<st1.name<< " "<<st1.roll<<" "<<endl;
cout<<st2.name<< " "<<st2.roll<<endl;
cout<<st3.name<< " "<<st3.roll<<endl;


}