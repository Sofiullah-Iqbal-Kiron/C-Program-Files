#include <bits/stdc++.h>
using namespace std;

/*
class Solution
{
    bool Capital(char ch)
    {
        return ch > 64 && ch < 91 ? true : false;
    }

    vector<int> Max(vector<int> v)
    {
        vector<int> ans;
        int i, max = v[0], maxidx = 0;
        for (i = 1; i < v.size(); i++)
        {
            if (v[i] > max)
            {
                max = v[i];
                maxidx = i;
            }
        }
        ans.push_back(max);
        ans.push_back(maxidx);

        return ans;
    }

public:
    string frequencySort(string s)
    {
        //Variable declaration
        int i, j, curr_max = 0, curr_max_idx = -1;
        string sorted;
        vector<int> capital(26, 0), small(26, 0), Main(52, 0), v;

        //Hash creating
        for (i = 0; i < s.size(); i++)
        {
            if (Capital(s[i]))
            {
                capital[s[i] - 'A']++;
            }
            else
            {
                small[s[i] - 'a']++;
            }
        }

        //Appending to the Main hash
        for (i = 0; i < Main.size(); i++)
        {
            if (i < 26)
            {
                Main[i] = capital[i];
            }
            else
            {
                Main[i] = small[i - 26];
            }
        }

        //Sorting by frequency
        i = 0;
        while (i < s.size())
        {
            v = Max(Main);

            curr_max = v[0];
            curr_max_idx = v[1];

            //Assigning char value to the sorted
            for (j = 0; j < curr_max; j++)
            {
                sorted.push_back(curr_max_idx < 26 ? curr_max_idx + 'A' : (curr_max_idx - 26) + 'a');
            }

            Main[curr_max_idx] = 0;
            i++;
        }

        //Returning sorted string
        return sorted;
    }
};
*/

///Server solution:-
/*
class Solution
{
public:
    string frequencySort(string s)
    {
        map<char,int>m;
        set<char>se;
        priority_queue<pair<int,char> >pq;
        int n=s.length(),i;
        for(i=0; i<n; i++)
            m[s[i]]+=1;
        for(i=0; i<n; i++)
        {
            if(se.count(s[i])!=0)
                continue;
            se.insert(s[i]);
            pq.push({m[s[i]],s[i]});
        }
        string ans="";
        while(!pq.empty())
        {
            int x=pq.top().first;
            while(x)
            {
                ans+=pq.top().second;
                x--;
            }
            pq.pop();
        }
        return ans;
    }
};
*/

///Accepted.
class Solution
{
    vector<int> Max(vector< pair<char, int> > V)
    {
        int max, maxidx, i;
        vector<int> ans;
        max = V[0].second;
        maxidx = 0;
        for (i = 1; i < V.size(); i++)
        {
            if (V[i].second > max)
            {
                max = V[i].second;
                maxidx = i;
            }
        }
        ans.push_back(max);
        ans.push_back(maxidx);

        return ans;
    }

    bool Pre(char ch, vector< pair<char, int> > V)
    {
        int i;
        for (i = 0; i < V.size(); i++)
        {
            if (V[i].first == ch)
            {
                return true;
            }
        }
        return false;
    }

public:
    string frequencySort(string s)
    {
        vector < pair<char, int> > V;
        vector<int> demo;
        string ans;
        int j, i = 0, max, maxidx;
        while (i < s.size())
        {
            if (!Pre(s[i], V))
            {
                V.push_back({s[i], 1});
            }
            else
            {
                for (j = 0; j < V.size(); j++)
                {
                    if (V[j].first == s[i])
                    {
                        V[j].second++;
                        break;
                    }
                }
            }

            i++;
        }
        i = 0;
        while (i < s.size())
        {
            demo = Max(V);
            max = demo[0];
            maxidx = demo[1];
            for (j = 0; j < max; j++)
            {
                ans.push_back(V[maxidx].first);
            }
            V[maxidx].second = 0;

            i++;
        }

        return ans;
    }
};

int main()
{
    Solution obj;
    cout << obj.frequencySort("145&&**&451fhfhjkfy26266ttt");
}
