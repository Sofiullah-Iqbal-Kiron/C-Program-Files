#include<bits/stdc++.h>
using namespace std;

bool checkPangram(string &s)
{
    ///Creating a hash-table for mark all character true.
    vector<bool> mark(26, false);
    int index;

    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            index = s[i]-'A';

        else if(s[i]>='a' && s[i]<='z')
            index=s[i]-'a';

        mark[index]=true;
    }

    for(int i=0; i<25; i++)
    {
        if(mark[i]==false)
            return false;
    }
    return true;
}

int main()
{
    string str = "ami fox jumps over the"
                 " lazy dog";

    if (checkPangram(str) == true)
        printf ("is a pangram");
    else
        printf ("is not a pangram");

    return(0);
}
