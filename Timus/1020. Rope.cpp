#include<bits/stdc++.h>
#define pi 3.141592653589793238
#define START int main(){
#define END system("PAUSE");return 0;}
using namespace std;

double dis(double a1, double b1, double a2, double b2)
{
    return sqrt(pow((b2-b1), 2)+pow((a2-a1), 2));
}

START

    /*int N;
    double R;
    cin >> N >> R;
    double x[N], y[N];
    for(int i=0; i<N; i++)
    {
        cin >> x[i] >> y[i];
    }
    double length;
    length = dis(x[N-1], y[N-1], x[0], y[0]);
    for(int i=0; i<N-1; i++)
    {
        length += dis(x[i], y[i], x[i+1], y[i+1]);
    }
    length += (N*2*pi*R);
    cout << fixed << setprecision(2) << length << endl;*/
    /*int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << dis(a, b, c, d) << endl;
    cout << (4*2*pi*1);*/

END
