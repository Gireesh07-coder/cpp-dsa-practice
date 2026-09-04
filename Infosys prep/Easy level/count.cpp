#include<iostream>
using namespace std;

int countEven(int arr[], int n)
{
    int count = 0;
     for(int i = 0;i < n;i++)
     {
        if(arr[i] % 2 == 0)
        {
            count += 1;
        }
     }
     return count;
}

int main()
{
    int arr [] = { 12, 42,3,65,23,48,102,117};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << countEven(arr, n);
    return 0;
}