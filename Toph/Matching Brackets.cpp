///Accepted. First code in LeetCode for this. Same mair.

#include<iostream>
#include<stack>
using namespace std;

bool isvalid(string s)
{
    if(s.size()==1 || s[0]==')' || s[0]=='}' || s[0]==']' || s[s.size()-1]=='(' || s[s.size()-1]=='{' || s[s.size()-1]=='[')
    {
        return false;
    }
    else if(s.size()==0)
    {
        return true;
    }

    int i;
    int n = s.size();
    stack<char> st;
    for(i=0; i<n; i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            st.push(s[i]);
        }
        else
        {
            if(st.empty())
            {
                return false;
            }
            else if(s[i]==')' && st.top()=='(')
            {
                st.pop();
            }
            else if(s[i]=='}' && st.top()=='{')
            {
                st.pop();
            }
            else if(s[i]==']' && st.top()=='[')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }

    return st.empty();
}

int main()
{
    string s;
    cin >> s;
    if(isvalid(s))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
