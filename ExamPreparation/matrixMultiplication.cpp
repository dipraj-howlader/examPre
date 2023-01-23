#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, y1, x2, y2;
    cout << "Enter the number of row and column of first matrix" << endl;
    cin >> x1 >> y1;
    cout << "Enter the number of row and column of first matrix" << endl;
    cin >> x2 >> y2;
    int arr[x1][y1];
    int arr2[x2][y2];
    for (int i = 0; i < x1; i++)
    {
        for (int j = 0; j < y1; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < x2; i++)
    {
        for (int j = 0; j < y2; j++)
        {
            cin >> arr2[i][j];
        }
    }

    if (y1 == x2)
    {
        int mul[x1][y2];
        for(int i = 0; i < x1; ++i)
        for(int j = 0; j < y2; ++j)
        {
            mul[i][j]=0;
        }
        for (int i = 0; i < x1; i++)
        {
            for (int j = 0; j < y2; j++)
            {
                 int look = mul[i][j];
                for (int p = 0; p < y1; p++)
                {
                    mul[i][j] += arr[i][p] * arr2[p][j];
                }
              look = mul[i][j];
                int my = 0;
            }
        }

        for (int i = 0; i < x1; i++)
        {
            for (int j = 0; j < y2; j++)
            {
                cout << mul[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "DNA not matched";
    }
}
/*
2 3
3 2
2 2 3
2 2 3
2 3
2 3
2 3
*/