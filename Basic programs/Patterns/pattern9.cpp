#include<iostream>
using namespace std;

int main()
{
    int n=5;
    for(int i = n;i >= 1;i--)
    {
        for(int j =1;j <= i;j++)
        {
            cout << char('A' +j - 1)<<" ";
        }
        cout <<"\n";
    }
    
    /*string s = "ABCDE";
   int Size = s.length();
    for(int i = 1; i <= Size;i++)
    {
        for(int j =1;j <= i;j++)
        {
            cout << s[j-1]<<" ";
        }
        cout <<"\n";
    }*/
}