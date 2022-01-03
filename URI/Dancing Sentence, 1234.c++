// ac

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string line;
    while (getline(cin, line))
    {
        int len = line.size();
        bool preUp = false;
        for (int i = 0; i < len; i++)
        {
            if (isalpha(line[i]) && preUp)
            {
                putchar(tolower(line[i]));
                preUp = false;
            }
            else if (isalpha(line[i]) && !preUp)
            {
                putchar(toupper(line[i]));
                preUp = true;
            }
            else
                putchar(line[i]);
        }
        cout << endl;
    }
}