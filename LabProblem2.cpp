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
        int x, y, weight;
        cin >> x >> y >> weight;
        x--;
        y--;
        arrFirst[x][y] = weight;
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
            if (arrFirst[i][j] == 0)
                PathMatrix[i][j] = 99;
            else
                PathMatrix[i][j] = arrFirst[i][j];
        }
    }

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                PathMatrix[i][j] = min(PathMatrix[i][j], (PathMatrix[i][k] + PathMatrix[k][j]));
            }
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
}
/*
4 7
1 2 5
2 4 2
3 2 3
1 1 7
4 1 4
4 3 1
3 3 3

 5 8
 3 5 3
 4 1 2
 5 2 2
 1 5 5
 1 3 1
 2 4 1
 3 4 4
 5 4 4
*/