#include <bits/stdc++.h>
using namespace std;
void printVec(vector<int> &v)
{
    cout << "size : " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<vector<int>> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int N;
        cin >> N;
        vector<int> temp;
        for (int j = 0; j < N; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
        for (int i = 0; i < v.size(); i++)
        {
            printVec(v[i]);
        }
    }
}