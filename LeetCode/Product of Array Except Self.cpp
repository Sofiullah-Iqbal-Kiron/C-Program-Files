///Accepted.

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        int i, c_zero=0;
        vector<int> sol;
        for(i=0; i<nums.size(); i++)
        {
            if(nums[i]==0)
            {
                c_zero++;
            }
            if(c_zero==2)
            {
                break;
            }
        }
        if(c_zero==2)
        {
            for(i=0; i<nums.size(); i++)
            {
                sol.push_back(0);
            }
            return sol;
        }
        else if(c_zero==1)
        {
            int posz;
            for(i=0; i<nums.size(); i++)
            {
                if(nums[i]==0)
                {
                    posz=i;
                    break;
                }
            }
            int net=1;
            for(i=0; i<nums.size(); i++)
            {
                if(nums[i]!=0)
                {
                    net*=nums[i];
                }
            }
            for(i=0; i<nums.size(); i++)
            {
                sol.push_back(0);
            }
            sol.at(posz)=net;
            return sol;
        }
        else
        {
            int net=nums[0];
            for(i=1; i<nums.size(); i++)
            {
                net*=nums[i];
            }
            for(i=0; i<nums.size(); i++)
            {
                sol.push_back(net/nums[i]);
            }
            return sol;
        }
    }
};

int main()
{

}
