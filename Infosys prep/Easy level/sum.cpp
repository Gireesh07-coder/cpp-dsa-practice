#include<iostream>
using namespace std;

int printSum(int arr[], int n)
{
      int sum = 0;
      for(int i = 0;i < n;i++)
      {
        sum += arr[i];
      }
      return sum;
}

int main()
{
    int arr [] = { 12, 45,3,65,23};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << printSum(arr, n);
    return 0;
}