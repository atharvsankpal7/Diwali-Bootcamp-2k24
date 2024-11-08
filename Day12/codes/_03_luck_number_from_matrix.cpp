#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> arr;
    int temp;
    while (cin >> temp)
    {
        arr.push_back(temp);
    }

    // converting array into matrix

    int k = 0;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[i][j] = arr[k];
            k++;
        }
    }

    int maxRowSum = 0;
    for (int r = 0; r < n; r++)
    {
        int currRowSum = 0;
        for (int c = 0; c < m; c++)
        {
            currRowSum += matrix[r][c];
        }
        maxRowSum = max(maxRowSum, currRowSum);
    }

    int maxColSum = 0;
    for (int c = 0; c < m; c++)
    {
        int currColSum = 0;
        for (int r = 0; r < n; r++)
        {
            currColSum += matrix[r][c];
        }
        maxColSum = max(maxColSum, currColSum);
    }

    cout << maxColSum + maxRowSum;
    return 0;
}