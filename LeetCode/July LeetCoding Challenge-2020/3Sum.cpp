class Solution
{
private:
    vector<int> subvec(int start_index, int end_index, vector<int> main)
    {
        vector<int> demo;
        for (int i = start_index, j = 0; i <= end_index; i++)
            demo.push_back(main[i]);

        return demo;
    }

    bool hasTwoSum(vector<int> subvec, int target)
    {
        int i, j;
        for (i = 0; i < subvec.size(); i++)
        {
            for (j = i + 1; j < subvec.size(); j++)
            {
                if (subvec[i] + subvec[j] == target)
                    return true;
            }
        }

        return false;
    }

    vector<int> thatThree(int first, vector<int> subvec, int target)
    {
        int i, j;
        bool got_it = false;
        vector<int> returnvec;
        returnvec.push_back(first);
        for (i = 0; i < subvec.size(); i++)
        {
            for (j = i + 1; j < subvec.size(); j++)
            {
                if (subvec[i] + subvec[j] == target)
                {
                    got_it = true;
                    returnvec.push_back(subvec[i]);
                    returnvec.push_back(subvec[j]);
                    break;
                }
            }
            if (got_it == true)
                break;
        }

        return returnvec;
    }

public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> list;
        int i;
        for (i = 0; i < nums.size(); i++)
        {
            if (hasTwoSum(subvec(0, nums.size() - 1, nums), -1 * nums[i]))
            {
                list.push_back(thatThree(nums[i], subvec(0, nums.size() - 1, nums), -1 * nums[i]));
            }
        }

        for (i = 0; i < list.size(); i++)
        {
            sort(list[i].begin(), list[i].end());
        }

        set<vector<int>> myList(list.begin(), list.end());
        list.assign(myList.begin(), myList.end());

        return list;
    }
};