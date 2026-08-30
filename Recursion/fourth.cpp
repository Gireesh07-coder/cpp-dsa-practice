//Using Backtracking

#include<iostream>
using namespace std;

void printName(int i, int n)
{
    if( i < 1)
      return;
    printName(i - 1, n);
    cout << i << endl;
}

int main()
{
    int n;
    cin >> n;
    printName(n,n);
    return 0;
}