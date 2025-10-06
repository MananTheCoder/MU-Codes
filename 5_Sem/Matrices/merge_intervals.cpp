#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<bool> vb;

#define forn(i, n) for (int i = 0; i < n; i++)

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        vvi ans;
        sort(intervals.begin(), intervals.end());
        vi prev = intervals[0], curr;
        for (int i = 1; i < intervals.size(); i++)
        {
            curr = intervals[i];
            if (curr[0] > prev[1])
            {
                ans.push_back(prev);
                prev = curr;
            }
            prev[1] = max(prev[1], curr[1]);
        }
        ans.push_back(prev);
        return ans;
    }
};