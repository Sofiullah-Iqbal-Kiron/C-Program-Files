///Accepted but not efficient. It's a large code.

#include<bits/stdc++.h>
#define START int main(){
#define END system("PAUSE");return 0;}
using namespace std;

START

     int i, j, eigenvalues=0;

     int n1;
     cin >> n1;
     int a1[n1];
     for(i=0; i<n1; i++)
     {
         cin >> a1[i];
     }

     int n2;
     cin >> n2;
     int a2[n2];
     for(i=0; i<n2; i++)
     {
         cin >> a2[i];
     }

     int n3;
     cin >> n3;
     int a3[n3];
     for(i=0; i<n3; i++)
     {
         cin >> a3[i];
     }

     int a[n1+n2+n3];
     for(i=0; i<n1; i++)
     {
         a[i]=a1[i];
     }

     for(i=n1, j=0; i<n1+n2; i++, j++)
     {
         a[i]=a2[j];
     }

     for(i=n1+n2, j=0; i<n1+n2+n3; i++, j++)
     {
         a[i]=a3[j];
     }

     for(i=0; i<n1; i++)
     {
         if(count(a, a+(n1+n2+n3), a1[i])==3)
         {
             eigenvalues++;
         }
     }

     cout << eigenvalues << endl;

END
