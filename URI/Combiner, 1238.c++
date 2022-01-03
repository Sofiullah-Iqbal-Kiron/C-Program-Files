// ac

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string one, two;
        cin >> one >> two;
        for (int i = 0, j = 0; i < max(one.size(), two.size()); i++, j++)
        {
            if (i < one.size() && isalpha(one[i]))
                cout << one[i];
            if (j < two.size() && isalpha(two[j]))
                cout << two[j];
        }
        cout << endl;
    }
}