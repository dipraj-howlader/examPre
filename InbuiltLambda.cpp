// all of
// none of
// any of
//lambda function
#include<bits/stdc++.h>
using namespace std;
int main( ) {
    vector<int> v = {-2,-3,-5};
    cout<<all_of(v.begin(), v.end(), [](int x){return x > 0;})<<endl;
    cout<<any_of(v.begin(), v.end(), [](int x){return x > 0;})<<endl;
    cout<<none_of(v.begin(), v.end(), [](int x){return x > 0;})<<endl;
    // none of and all of are vice versa.  


}