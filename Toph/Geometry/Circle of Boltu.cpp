///Accepted till third test case, why man!

#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

double distance_from_center(int x, int y)
{
    return sqrt(pow(x, 2)+pow(y, 2));
}

double Distance_Square(int x1, int y1, int x2, int y2)
{
    return (pow((y2-y1), 2) + pow((x2-x1), 2));
}

int main()
{
    int T;
    cin >> T;
    for(int i=1; i<=T; i++)
    {
        int N;
        cin >> N;
        int x[N], y[N];
        double arr[N];
        for(int j=0; j<N; j++)
        {
            cin >> x[j] >> y[j];
            arr[j] = distance_from_center(x[j], y[j]);
        }

        double maxx = 0;
        int m=0;
        for(int j=0; j<N; j++)
        {
            if(arr[j]>=maxx)
            {
                maxx=arr[j];
                m=j;
            }
            else if(arr[j]<maxx)
            {
                continue;
            }
        }

        double minn = maxx;
        int n = 0;
        for(int j=0; j<N; j++)
        {
            if(arr[j]<=minn)
            {
                minn=arr[j];
                n=j;
            }
            else if(arr[j]>minn)
            {
                continue;
            }
        }

        cout << "Case " << i << ": " << Distance_Square(x[m], y[m], x[n], y[n]) << endl;
    }
}
