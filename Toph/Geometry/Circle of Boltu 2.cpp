#include<iostream>
#include<cmath>
using namespace std;

long long int factorial(int n)
{
    int i, ans=1;
    for(i=n; i>=2; i--)
    {
        ans*=i;
    }

    return ans;
}

int combination(int n)
{
    return factorial(n)/(2*factorial(n-2));
}

double Distance_Square(int x1, int y1, int x2, int y2)
{
    return (pow((y2-y1), 2) + pow((x2-x1), 2));
}

double find_max(double arr[], int n)
{
    int i;
    double maxx=arr[0];
    for(i=1; i<n; i++)
    {
        if(arr[i]>maxx)
        {
            maxx=arr[i];
        }
    }

    return maxx;
}

int main()
{
    int T;
    cin >> T;
    for(int i=1; i<=T; i++)
    {
        int N, j;
        cin >> N;
        long int x[N], y[N];
        for(j=0; j<N; j++)
        {
            cin >> x[j] >> y[j];
        }

        int k, l=0;
        double arr[combination(N)];
        for(j=0; j<N-1; j++)
        {
            for(k=j+1; k<N; k++, l++)
            {
                arr[l]=Distance_Square(x[j], y[j], x[k], y[k]);
            }
        }

        cout << "Case " << i << ": " << find_max(arr, combination(N)) << endl;
    }
}
