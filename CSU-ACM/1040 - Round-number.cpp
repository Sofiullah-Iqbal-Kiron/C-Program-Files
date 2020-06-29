#include<bits/stdc++.h>
#define END return 0;

using namespace std;

int main()
{
    int n, b, i, result, x, y;
    float m;
    cin >> n >> b;
    if(n<b)
    {
        int M[2];
        float ave;
        M[0]=0;
        M[1]=b;
        ave=(M[0]+M[1])/2;
        if(ave==n)
        {
            cout << M[1] << endl;
            END;
        }
        else
        {
            if(b<2*n)
            {
                cout << M[1] << endl;
                END;
            }
            else
            {
                cout << M[0] << endl;
                END;
            }
        }
    }
    else if(n==b)
    {
        cout << b << endl;
        END;
    }
}
