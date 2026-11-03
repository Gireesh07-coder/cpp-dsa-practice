#include<bits/stdc++.h>
using namespace std;

int closestNumber(int n, int m)
{
   int q = n / m;
   //n1 is the closest number
   int n1 = m * q;

   // n2 is the closest number
   int n2 = (m * q) > 0 ? (m * (q + 1)) : (m * (q - 1));

   if( abs(n - n1) < abs(n - n2))
     return n1;
     
    return n2;
}
int main()
{
    int n = -15;
    int m = 6;
   cout << closestNumber(n,m);
    return 0;
}