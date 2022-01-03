///Accepted.

#include<bits/stdc++.h>
using namespace std;

//Server Solution.
/*
class Solution
{
public:
    int firstUniqChar(string s)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        unordered_map<char,int> m;
        m.reserve(s.size());
        for(auto i:s)
            m[i]++;
        for(int i=0; i<s.size(); ++i)
        {
            if(m[s[i]]==1)
                return i;
        }
        return -1;
    }
};
*/

class Solution
{
public:
    int firstUniqChar(string s)
    {
        int i, j;
        bool unique=false;
        for(i=0; i<s.size(); i++)
        {
            unique = true;
            for(j=0; j<s.size(); j++)
            {
                if(s[i]==s[j] and i!=j)
                {
                    unique = false;
                    break;
                }
            }
            if(unique==true)
            {
                return i;
            }
        }
        return -1;
    }
};

int main()
{
    Solution obj;
    cout << obj.firstUniqChar("oommii") << endl;
}
