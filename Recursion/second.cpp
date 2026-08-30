#include<iostream>
using namespace std;

void printName(int i, int n)
{
    if( i < 1)
      return;
    cout << i << endl;
    printName(i - 1, n);
}

int main()
{
    int n;
    cin >> n;
    printName(n,n);
    return 0;
}