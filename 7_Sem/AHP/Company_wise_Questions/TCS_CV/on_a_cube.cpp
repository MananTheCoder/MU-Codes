#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef map<int, int> mii;
typedef pair<int, int> pii;

#define forn(i, n) for (int i = 0; i < n; i++)
#define pb push_back
#define mp make_pair
#define PI 3.142

vi input_vector()
{
    int n;
    cin >> n;
    vi v(n);
    forn(i, n)
    {
        cin >> v[i];
    }
    return v;
}

void print_vec(vi &v)
{
    forn(i, v.size())
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}

double round_double(double val, int n)
{
    double mult = pow(10, n);
    return round(val * mult) / mult;
}

double get_eucld_dist(int del_x, int del_y)
{
    int x_2 = del_x * del_x;
    int y_2 = del_y * del_y;
    return round_double(sqrt(x_2 + y_2), 2);
}

double get_cartesian_dist(vi &point1, vi &point2)
{
    int dist_2 = 0;
    forn(i, 3)
    {
        int delta = point1[i] - point2[i];
        dist_2 += delta * delta;
    }
    return sqrt(dist_2);
}

pii get_plane(vi &point)
{
    if (point[0] == 0 || point[0] == 10)
    {
        return (point[0] == 0) ? mp(1, 0) : mp(1, 10);
    }
    if (point[1] == 0 || point[1] == 10)
    {
        return (point[1] == 0) ? mp(2, 0) : mp(2, 10);
    }
    return (point[2] == 0) ? mp(3, 0) : mp(3, 10);
}

double get_dist_same_plane(vi &point1, vi &point2)
{
    double d = get_cartesian_dist(point1, point2);
    return round_double(PI * d / 3, 2);
}

int get_diff_from_wall(vi &point1, vi &point2, int dim)
{
    int min_diff = abs(point1[dim - 1] - 10) + abs(point2[dim - 1] - 10);
    if (dim == 3)
    {
        return min_diff;
    }
    return min(min_diff, point1[dim - 1] + point2[dim - 1]);
}

int get_dim(int comm_dim, int &min_dim, vi &point1, vi &point2)
{
    int dim_diff = INT_MAX;
    forn(i, 3)
    {
        int curr_dim = i + 1, temp_diff;
        if (curr_dim != comm_dim)
        {
            if ((temp_diff = get_diff_from_wall(point1, point2, i + 1)) < dim_diff)
            {
                dim_diff = temp_diff;
                min_dim = curr_dim;
            }
        }
    }
    return dim_diff;
}

double get_dist(vi &point1, vi &point2)
{
    pii plane1 = get_plane(point1);
    pii plane2 = get_plane(point2);
    if (plane1 == plane2)
    {
        return get_dist_same_plane(point1, point2);
    }
    if (plane1.first != plane2.first)
    {
        int dim1 = plane1.first, dim2 = plane2.first;
        int dim3 = 6 - dim1 - dim2;
        int del1 = abs(point1[dim1 - 1] - point2[dim1 - 1]);
        int del2 = abs(point1[dim2 - 1] - point2[dim2 - 1]);
        int del3 = abs(point1[dim3 - 1] - point2[dim3 - 1]);
        return get_eucld_dist(del1 + del2, del3);
    }
    // parallel planes
    int comm_dim = plane1.first, min_dim = -1;
    int dim_diff = get_dim(comm_dim, min_dim, point1, point2);
    int dim3 = 6 - comm_dim - min_dim;
    int del_dim3 = abs(point1[dim3 - 1] - point2[dim3 - 1]);
    return get_eucld_dist(10 + dim_diff, del_dim3);
}

double total_dist(vvi &points)
{
    double ans = 0;
    forn(i, points.size() - 1)
    {
        ans += get_dist(points[i], points[i + 1]);
    }
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    vvi points(n, vi(3));
    forn(i, n)
    {
        forn(j, 3)
        {
            cin >> points[i][j];
        }
    }
    cout << total_dist(points) << "\n";
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}