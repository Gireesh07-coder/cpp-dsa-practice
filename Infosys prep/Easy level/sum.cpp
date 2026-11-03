#include<bits/stdc++.h>
using namespace std;

int printSum(int arr[], int n)
{
    return accumulate(arr, arr + n, 0);
} 

int main()
{
    int arr [] = { 12, 45,3,65,23};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = printSum(arr, n);
    cout << result;
    return 0;
}