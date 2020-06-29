#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main()
{
    int n, i, sum = 0, m;
    cout << "How many number in your input? "; cin >> n;
    for(i=1; i<=n; i++)
    {
        cout << "Enter " << i << " no. element: "; cin >> m;
        sum +=m;
    }
    float average = (float)sum/n;
    cout << "The average is: " << setw(10) << fixed << setprecision(4) << average << endl;

    return 0;
}
