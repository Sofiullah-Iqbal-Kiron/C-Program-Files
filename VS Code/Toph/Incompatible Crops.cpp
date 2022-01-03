#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declaration
    int R, C, count = 0, i, j;
    cin >> R >> C;
    char fields[R][C];

    // Input
    for (i = 0; i < R; i++)
    {
        string currentLine;
        cin >> currentLine;
        for (j = 0; j < C; j++)
        {
            fields[i][j] = currentLine[j];
        }
    }

    // Task
    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
        {
            if (fields[i][j] != '*' && i - 1 >= 0 && fields[i - 1][j] != '*' && i + 1 < R && fields[i + 1][j] != '*' && j - 1 >= 0 && fields[i][j - 1] && j + 1 < C && fields[i][j + 1] != '*')
                count++;
        }
    }

    cout << count << endl;
}