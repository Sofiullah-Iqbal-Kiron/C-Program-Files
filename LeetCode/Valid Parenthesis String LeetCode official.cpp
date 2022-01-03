///678. Valid Parenthesis String, This is the original name.
///Helpful Link: https://leetcode.com/problems/valid-parenthesis-string/discuss/582074/C%2B%2B-Using-Two-Stacks

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string s;
    bool checkValidString(string s)
    {
        stack<int> open, asterisk;
        int i;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]==')')
            {
                if(!open.empty())
                {
                    open.pop();
                }
                else if(!asterisk.empty())
                {
                    asterisk.pop();
                }
                else
                {
                    return false;
                }
            }
            else if(s[i]=='(')
            {
                open.push(i);
            }
            else
            {
                asterisk.push(i);
            }
        }
        while(!open.empty() && !asterisk.empty())
        {
            if(open.top()>asterisk.top())
            {
                return false;
            }
            open.pop();
            asterisk.pop();
        }

        return open.empty();
    }
};

int main()
{
    Solution obj;
    cin >> obj.s;
    if(obj.checkValidString(obj.s))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
}
