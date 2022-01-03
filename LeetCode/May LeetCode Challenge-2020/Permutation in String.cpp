///Again Time Limit Exceeded.
//Now accepted by hash vector.

class Solution
{
    bool is_anagram(string s2, string s1, vector<int> s1hash)
    {
        int i;
        vector<int> s2hash(26, 0);
        for (i = 0; i < s2.size(); i++)
        {
            s2hash[s2[i] - 'a']++;
        }

        return s1hash == s2hash;
    }

public:
    bool checkInclusion(string s1, string s2)
    {
        if (s1.length() > s2.size())
        {
            return s1.length() < s2.size();
        }
        vector<int> s1hash(26, 0);

        int i;
        for (i = 0; i < s1.size(); i++)
        {
            s1hash[s1[i] - 'a']++;
        }

        for (i = 0; i <= s2.size() - s1.size(); i++)
        {
            if (is_anagram(s2.substr(i, s1.size()), s1, s1hash))
            {
                return true;
            }
        }

        return false;
    }
};