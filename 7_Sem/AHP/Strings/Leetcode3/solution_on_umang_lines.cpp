class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int ans = 0;
        unordered_set<char> chars;
        int l = 0, r = 0;
        while (r < s.length())
        {
            if (chars.find(s[r]) == chars.end())
            {
                chars.insert(s[r]);
                r++;
                ans = max(ans, r - l);
            }
            else
            {
                chars.erase(s[l]);
                l++;
            }
        }
        return ans;
    }
};