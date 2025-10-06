#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;

#define forn(i, n) for (int i = 0; i < n; i++)

class Solution
{
private:
    void set_row_0(vvi &matrix, int row)
    { // O(C)
        forn(i, matrix[0].size())
        {
            matrix[row][i] = 0;
        }
    }
    void set_col_0(vvi &matrix, int col)
    { // O(R)
        forn(i, matrix.size())
        {
            matrix[i][col] = 0;
        }
    }

public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        // unordered_set<int> rows, cols;
        bool row_flag = false, col_flag = false;
        forn(i, matrix.size())
        {
            forn(j, matrix[0].size())
            {
                if (matrix[i][j] == 0)
                {
                    if (i == 0)
                    {
                        row_flag = true;
                    }
                    if (j == 0)
                    {
                        col_flag = true;
                    }
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        forn(i, matrix.size() - 1)
        {
            if (matrix[i + 1][0] == 0)
            {
                set_row_0(matrix, i + 1);
            }
        }
        forn(i, matrix[0].size() - 1)
        {
            if (matrix[0][i + 1] == 0)
            {
                set_col_0(matrix, i + 1);
            }
        }

        if (row_flag)
        {
            set_row_0(matrix, 0);
        }
        if (col_flag)
        {
            set_col_0(matrix, 0);
        }
        // for(int i:matrix[0]) {
        // if (flag == 1) {
        //     set_row_0(matrix,0);
        // }
        // }

        // forn(i,matrix.size()) { // R * C * (R+C)
        //     forn(j, matrix[0].size()) { // C * (R+C)
        //         if (matrix[i][j] == 0) { // O(R+C)
        //             set_row_0(matrix, i); // O(C)
        //             set_col_0(matrix, j); // O(R)
        //         }
        //     }
        // }
    }
};