///Accepted.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, i, ball, over;
    string S;
    cin >> T;
    while(T--)
    {
        cin >> S;
        ball=0;
        for(i=0; i<S.size(); i++)
        {
            if(S[i]==68 || S[i]==78 || S[i]==87)
            {
                continue;
            }
            else
            {
                ball++;
            }
        }
        if(ball<6)
        {
            if(ball>1)
            {
                cout << ball << " BALLS" << endl;
            }
            else
            {
                cout << ball << " BALL" << endl;
            }
        }
        else if((ball%6==0))
        {
            if((ball/6)==1)
            {
                cout << ball/6 << " OVER" << endl;
            }
            else
            {
                cout << ball/6 << " OVERS" << endl;
            }
        }
        else if((ball%6)!=0)
        {
            over = ball/6;
            ball %= 6;
            if(over==1)
            {
                if(ball==1)
                {
                    cout << over << " OVER " << ball << " BALL" << endl;
                }
                else
                {
                    cout << over << " OVER " << ball << " BALLS" << endl;
                }
            }
            else
            {
                if(ball==1)
                {
                    cout << over << " OVERS " << ball << " BALL" << endl;
                }
                else
                {
                    cout << over << " OVERS " << ball << " BALLS" << endl;
                }
            }
        }
    }
}
