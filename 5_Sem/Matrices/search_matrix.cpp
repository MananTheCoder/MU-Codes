#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;

#define forn(i, n) for (int i = 0; i < n; i++)

vector<int> input_vi()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    return v;
}

void print_vi(vector<int> v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << "\t";
    }
    cout << "\n";
    v[0] = 10;
}

void input_matrix(vector<vector<int>> &matrix)
{
    // int m = matrix.size(), n = matrix[0].size();
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cin >> matrix[i][j];
    //     }
    // }
    forn(i, matrix.size())
    {
        forn(j, matrix[0].size())
        {
            cin >> matrix[i][j];
        }
    }
}

bool searchMatrix(vvi &matrix, int target)
{
    forn(i, matrix.size())
    {
        forn(j, matrix[0].size())
        {
            if (target == matrix[i][j])
            {
                return true;
            }
        }
    }
    return false;
}

void solve()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> matrix(m, vector<int>(n));
    // vvi matrix(m, vi(n));
    input_matrix(matrix);
    int target;
    cin >> target;
    cout << searchMatrix(matrix, target) << "\n";
}

int main()
{
    solve();
}