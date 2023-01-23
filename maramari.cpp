#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v;
    vector<int> temp;
    temp.push_back(5);
    temp.push_back(4);
    v.push_back(temp);
    temp.push_back(25);
    temp.push_back(85);
    v.push_back(temp);
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}
