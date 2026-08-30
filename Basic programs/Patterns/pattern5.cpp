#include<iostream>
using namespace std;

int main()
{
    int n=5;
    //Upper half
    
    for(int i = 1;i <= n;i++)
    {
    
    //print space
    for(int j = 1 ; j <= n - i; j++)
    {
        cout << " ";
    }

    //print stars
    for(int j = 1 ; j <= 2 * i - 1; j++)
    {
        cout << "*";
    }

    cout <<"\n";
    }

   
   //lowehalf
    for(int i = n;i >= 1;i--)
    {
    
    //print space
    for(int j = 1 ; j <= n - i; j++)
    {
        cout << " ";
    }

    //print stars
    for(int j = 1 ; j <= 2 * i - 1; j++)
    {
        cout << "*";
    }

    cout <<"\n";
    }
}