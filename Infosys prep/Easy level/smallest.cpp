#include<iostream>
using namespace std;

int smallest(int arr[], int n)
{
      int smallest = arr[0];
      for(int i = 0; i < n; i++)
      {
        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
      }
      return smallest;
}

int main()
{
    int arr [] = { 12, 45,3,65,23};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << smallest(arr, n);
    return 0;
}