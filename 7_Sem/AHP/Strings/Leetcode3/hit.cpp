class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        vector<string> vec;

        for (int index = 0; index < s.size(); index++)
        {
            // push all substrings w/o repetition in vec
            string str = "";
            set<char> char_set;
            for (int i = index; i < s.size(); i++)
            {
                if (char_set.find(s[i]) == char_set.end())
                {
                    str += s[i];
                    char_set.insert(s[i]);
                }
                else
                {
                    break;
                }
            }
            vec.push_back(str);
        }
        int count = 0;
        for (string str : vec)
        {
            int length = str.size();
            count = max(count, length);
        }
        return count;
    }
};

// analyse the time complexity