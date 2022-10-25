class Solution
{
public:
    bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
    {
        string newWord1 = "", newWord2 = "";
        for (string s : word1)
            newWord1 += s;
        for (int i = 0; i < word2.size(); i++)
            newWord2 += word2[i];

        return newWord1 == newWord2;
    }
};