#include<iostream>
using namespace std;


bool isEven(int n)
{
    if( (n & 1) == 0)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    if(isEven(n) == true)
        cout << "True";
    else
        cout << "False";
}












/* int main()
{
    int n;
    cin >> n;
    if(n % 2 == 0)
    {
        cout << n << " is even number ";
    }
    else
    {
        cout << n << " is odd number ";
    }
} */