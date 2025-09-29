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
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << "\t";
    // }
    for (int x : v)
    {
        cout << x << "\t";
    }
    cout << "\n";
}

void input_matrix(vector<vector<int>> &matrix)
{
    forn(i, matrix.size())
    {
        forn(j, matrix[0].size())
        {
            cin >> matrix[i][j];
        }
    }
}

void print_matrix(vvi &matrix)
{
    for (vi &row : matrix)
    {
        print_vi(row);
    }
}

void shivani_approach(vvi &matrix)
{
    int m = matrix.size(), n = matrix[0].size();
    forn(i, m * n)
    {
        // shivani approach
        matrix[i / n][i % n] = i + 1;
    }
}

void hetansh_approach(vvi &matrix)
{
    int m = matrix.size(), n = matrix[0].size();
    int temp = 1;
    forn(i, m)
    {
        forn(j, n)
        {
            matrix[i][j] = temp++;
        }
    }
}

void fill_matrix_horizontally_using_formula(vvi &matrix)
{
    forn(i, matrix.size())
    {
        forn(j, matrix[0].size())
        {
            matrix[i][j] = matrix[0].size() * i + j + 1;
        }
    }
}

void fill_matrix_vertically_shivani(vvi &matrix)
{
    int temp = 1;
    forn(j, matrix[0].size())
    {
        forn(i, matrix.size())
        {
            matrix[i][j] = temp++;
        }
    }
}

void fill_matrix_vertically_formula(vvi &matrix)
{
    int R = matrix.size(), C = matrix[0].size();
    forn(i, R)
    {
        forn(j, C)
        {
            matrix[i][j] = 1 + i + R * j;
        }
    }
}

void fill_matrix_vertically_linear(vvi &matrix)
{
    int R = matrix.size(), C = matrix[0].size();
    forn(i, R * C)
    {
        matrix[i % R][i / R] = (i + 1);
    }
}

void solve()
{
    int m, n;
    cin >> m >> n;
    vvi matrix(m, vi(n));
    // shivani_approach(matrix);
    fill_matrix_vertically_linear(matrix);
    print_matrix(matrix);
}

int main()
{
    solve();
}