#include<vector>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{   int matrix[5][5];
    int row, column;
    for (int i = 0; i<5; ++i)
    {   for (int j=0 ; j<5 ; ++j)
        {   cin >> matrix[i][j];
            if (matrix[i][j] == 1)
            {   column = i;
                row = j;}}}

    cout << abs(column - 2) + abs(row - 2) << endl;
    
    return 0;
}
