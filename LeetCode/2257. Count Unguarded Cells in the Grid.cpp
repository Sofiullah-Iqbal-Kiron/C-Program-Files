// Also time limit exceed in 38/47. So the language is not issue. The issue is algorithm.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countUnguarded(int m, int n, vector<vector<int>> &guards, vector<vector<int>> &walls)
    {
        int unguarded = m * n - walls.size() - guards.size();

        // Declare char grid.
        char grid[m][n];
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                grid[i][j] = 'u';

        // Walling.
        for (int i = 0; i < walls.size(); i++)
        {
            vector<int> w = walls[i];
            grid[w[0]][w[1]] = 'W';
        }

        // Guarding.
        for (int i = 0; i < guards.size(); i++)
        {
            vector<int> g = guards[i];
            grid[g[0]][g[1]] = 'G';
        }

        // Iterate through guards the unguarded-- for north, east, south, west until current cell not in walls.
        for (int i = 0; i < guards.size(); i++)
        {
            vector<int> g = guards[i];
            // Top, North.
            int r = g[0] - 1;
            while (r > -1)
            {
                int curRow = r, curCol = g[1];
                if (grid[curRow][curCol] == 'W')
                    break;
                if (grid[curRow][curCol] != 'G')
                {
                    grid[curRow][curCol] = 'G';
                    unguarded--;
                }
                r--;
            }

            // Right, East.
            int c = g[1] + 1;
            while (c < n)
            {
                int curRow = g[0], curCol = c;
                if (grid[curRow][curCol] == 'W')
                    break;
                if (grid[curRow][curCol] != 'G')
                {
                    grid[curRow][curCol] = 'G';
                    unguarded--;
                }
                c++;
            }

            // Bottom, South.
            r = g[0] + 1;
            while (r < m)
            {
                int curRow = r, curCol = g[1];
                if (grid[curRow][curCol] == 'W')
                    break;
                if (grid[curRow][curCol] != 'G')
                {
                    grid[curRow][curCol] = 'G';
                    unguarded--;
                }
                r++;
            }

            // Left, West.
            c = g[1] - 1;
            while (c > -1)
            {
                int curRow = g[0], curCol = c;
                if (grid[curRow][curCol] == 'W')
                    break;
                if (grid[curRow][curCol] != 'G')
                {
                    grid[curRow][curCol] = 'G';
                    unguarded--;
                }
                c--;
            }
        }

        return unguarded;
    }
};

int main()
{
    cout << "Hello" << endl;
    return 0;
}

// wrong answer: 17/47 cause in cpp, primitive values not automatically assigned, garbage at declaration line 13.
// 35
// 72
// [[0,11],[33,22],[15,19],[14,2],[29,23],[17,15],[32,63],[22,34],[1,71],[20,42],[18,61],[29,54],[34,30],[22,68],[34,55],[33,42],[8,28],[26,20],[25,59],[20,61]]
// [[2,9],[3,70],[27,47],[7,70],[7,48],[27,2],[20,15],[20,66],[22,29],[26,3]]