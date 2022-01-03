///Time Limit Exceeded at 34 out of 36.

class Solution
{
    bool is_anagram(string s, string p)
    {
        int i = 0, j;
        for (; i < p.size(); i++)
        {
            if (s.find(p[i]) != -1)
            {
                s[s.find(p[i])] = '0';
            }
            else
            {
                return false;
            }
        }
        return true;
    }

public:
    vector<int> findAnagrams(string s, string p)
    {
        vector<int> anagram_indeces;
        if (p.size() > s.size())
        {
            return anagram_indeces;
        }

        int i;
        for (i = 0; i <= s.size() - p.size(); i++)
        {
            if (is_anagram(s.substr(i, p.size()), p))
            {
                anagram_indeces.push_back(i);
            }
        }

        return anagram_indeces;
    }
};

///Tech Dose solution.
/*
class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        vector<int> ans;          //For storing indeces.
        vector<int> hash(26, 0);  //Created a vector name hash for string s alphabet count
                                    and initialized value 0, 26 times.
        vector<int> phash(26, 0); //Created a vector name phash for string p alphabet count
                                    and initialized value 0, 26 times.
        int window = p.size();
        int len = s.size();
        if (len < window)
        {
            return ans;
        }

        int left = 0, right = 0;
        while (right < window)
        {
            phash[p[right] - 'a'] += 1;
            hash[s[right++] - 'a'] += 1;
        }
        right -= 1;
        while (right < len)
        {
            if (phash == hash)
            {
                ans.push_back(left);
            }
            right += 1;
            if (right != len)
            {
                hash[s[right] - 'a'] += 1;
            }
            hash[s[left] - 'a'] -= 1;
            left += 1;
        }
        return ans;
    }
};
*/

//Now my solution after learning the hashing.
/*
class solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        vector<int> ans;
        vector<int> hash(26, 0);
        vector<int> phash(26, 0);

        if (p.size() > s.size())
        {
            return ans;
        }

        int left = 0, right = 0;
        while (right < p.size())
        {
            phash[p[right] - 'a']++;
            hash[s[right] - 'a']++;
            right++;
        }
        right--;
        while (right < s.size())
        {
            if (hash == phash)
            {
                ans.push_back(left);
            }
            right++;
            if (right != s.size())
            {
                hash[s[right] - 'a']++;
            }
            hash[s[left] - 'a']--;
            left++;
        }
        return ans;
    }
};
*/

///Server code.
/*
class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        int n = p.size();
        int m = s.size();
        int K = n;
        vector<int> res;

        unordered_map<char, int> mp;

        for (char c : p)
        {
            mp[c]++;
        }

        for (int i = 0; i < n; i++)
        {
            mp[s[i]]--;
            if (mp[s[i]] >= 0)
            {
                K--;
            }
        }

        for (int i = 0; i + n - 1 < m; i++)
        {
            if (i != 0)
            {
                mp[s[i - 1]]++;
                if (mp[s[i - 1]] > 0)
                {
                    K++;
                }
                mp[s[i + n - 1]]--;
                if (mp[s[i + n - 1]] >= 0)
                {
                    K--;
                }
            }

            if (K == 0)
            {
                res.push_back(i);
            }
        }

        return res;
    }
};
*/