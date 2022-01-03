///Accepted in order of ransomsize*magazinesize.

class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        if(ransomNote==magazine && ransomNote=="")
        {
            return true;
        }
        int i, j;
        bool found;
        for(i=0; i<ransomNote.size(); i++)
        {
            found=false;
            for(j=0; j<magazine.size(); j++)
            {
                if(ransomNote[i]==magazine[j])
                {
                    magazine[j]='0';
                    found=true;
                    break;
                }
            }
            if(found==false)
            {
                return false;
            }
        }

        return true;
    }
};