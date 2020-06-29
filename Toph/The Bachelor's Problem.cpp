#include<bits/stdc++.h>
#define END return 0;
using namespace std;

int main()
{
    int T, i, j, n[6], m[6], cbill, nbill, B, nb;
    cin >> T;
    for(i=1; i<=T; i++)
    {
        for(j=0; j<6; ++j)
        {
            cin >> n[j];
        }
        cin >> B;
        for(j=0; j<6; j++)
        {
            cin >> m[j];
        }

        cbill = 0;
        nbill = 0;
        cbill = accumulate(n, n+6, cbill);
        nbill = accumulate(m, m+6, nbill);

        if(cbill<B)
        {
            nb = nbill - (B - cbill);
            if(nb<0)
            {
                nb = 0;
            }
        }
        else if(B<cbill)
        {
            nb = nbill + (cbill - B);
        }
        cout << "Case " << i << ": " << nb << endl;
    }

    END;
}
