#include<iostream>

using namespace std;


void printTable(int n, int i = 1)
{
    if(i == 11)
        return;   
    cout << n << " * " << i << " = " << n * i << " \n ";
    i++;
    printTable(n, i);
}


int main()
{
    int n;
    cin >>n;
    printTable(n);
    return 0;
}









/* int main()
{
    int n;
    cin >>n;
    for(int i = 1; i <= 10 ; i++)
    {
        cout <<  n  << " * " << i << " = " << n * i << "\n";
    }
} */