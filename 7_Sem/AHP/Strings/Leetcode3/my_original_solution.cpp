class Solution
{
private:
    void print_chars(unordered_set<char> &chars)
    {
        for (char c : chars)
        {
            cout << c << " ";
        }
        cout << "\n";
    }

public:
    int lengthOfLongestSubstring(string s)
    {
        if (s.length() < 2)
        {
            return s.length();
        }
        int n = s.length();
        unordered_set<char> chars;
        int l = 0, r = 0;
        chars.insert(s[l]);
        int ans = 1;
        r++;
        cout << l << " " << r << "\n";
        while (r < n)
        {
            // print_chars(chars);
            if (chars.find(s[r]) != chars.end())
            {
                // mila
                while (s[l] != s[r])
                {
                    chars.erase(s[l]);
                    l++;
                }
                chars.erase(s[l]);
                l++;
            }
            chars.insert(s[r]);
            r++;
            int chars_size = chars.size();
            ans = max(ans, chars_size);
            cout << l << " " << r << "\n";
        }
        return ans;
    }
};