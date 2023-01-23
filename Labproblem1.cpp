#include <bits/stdc++.h>
using namespace std;

int main()
{
    int node, edge;
    cout << "Enter node and edge : " << endl;
    cin >> node >> edge;
    int n = node;
    int arrFirst[n][n];
    int mulMatrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arrFirst[i][j] = 0;
            mulMatrix[i][j] = 0;
        }
        cout << endl;
    }
    for (int i = 0; i < edge; i++)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        arrFirst[x][y] = 1;
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            for (int k = 0; k < n; ++k)
            {
                mulMatrix[i][j] += arrFirst[i][k] * arrFirst[k][j];
            }
        }
    }

    cout << "M * M adjacency Matrix is: " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mulMatrix[i][j] << " ";
        }
        cout << endl;
    }
    // Warshall algorithm
    int PathMatrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arrFirst[i][j] != 0)
                PathMatrix[i][j] = 1;
            else
                PathMatrix[i][j] = 0;
        }
    }
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                PathMatrix[i][j] = PathMatrix[i][j] | (PathMatrix[i][k] & PathMatrix[k][j]);
            }
        }
    }
    int count =0;
 for (int i = 0; i < n; i++)
 {
    for (int j = 0; j < n; j++)
    {
        if(PathMatrix[i][j]==1)
        count++;
    }
    
 }
 
    cout << "Path Matrix using Warshall Algorithm : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << PathMatrix[i][j] << " ";
        }
        cout << endl;
    }

cout<<endl;
 cout<<count<<endl;
}
/*
5 8
3 4
5 3
2 4
1 5
3 2
4 2
3 1
5 1
*/

/*
6 10
1 6 
2 1
2 3
3 5
4 5
4 2
2 6
5 3
4 3
6 4

*/