#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

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

double find_mean(vi &v)
{
    int sum = 0;
    for (int x : v)
    {
        sum += x;
    }
    return (double)sum / v.size();
}

double find_median(vi &v)
{
    sort(v.begin(), v.end());
    int n = v.size();
    if (n % 2 == 0)
    {
        return (v[n / 2] + v[(n - 1) / 2]) / 2.0;
    }

    return v[n / 2];
}

int find_mode_single(vi &v)
{
    int mode;
    unordered_map<int, int> freq_map;
    for (int num : v)
    {
        freq_map[num]++;
    }
    int max_freq = 0;
    for (auto [num, freq] : freq_map)
    {
        if (freq > max_freq)
        {
            max_freq = freq;
            mode = num;
        }
    }
    return mode;
}

vi find_mode(vi &v) // O(n + m) <= 2*O(n)
{
    vi mode;
    unordered_map<int, int> freq_map;
    int max_freq = 0;
    for (int num : v) // n * 1 =  O(n)
    {
        freq_map[num]++;
        if (freq_map[num] > max_freq)
        {
            max_freq = freq_map[num];
            mode = {num};
        }
        else if (freq_map[num] == max_freq)
        {
            mode.push_back(num);
        }
    }
    // 1
    // for (pair<int, int> row : freq_map) // m * 1 = O(m)
    // {
    // if (row.second > max_freq)
    // {
    //     max_freq = row.second;
    //     // mode = vi(1,row.first);
    //     mode = {row.first};
    // }
    // else if (row.second == max_freq)
    // {
    //     mode.push_back(row.first);
    // }
    // }

    // for (pair<int, int> row : freq_map)
    // {
    //     if (row.second == max_freq)
    //     {
    //         mode.push_back(row.first);
    //     }
    // }
    return mode;
}

void solve()
{
    vi v = input_vi();
    // cout << find_mode_single(v) << "\n";
    vi mode = find_mode(v);
    print_vi(mode);
}

int main()
{
    solve();
}