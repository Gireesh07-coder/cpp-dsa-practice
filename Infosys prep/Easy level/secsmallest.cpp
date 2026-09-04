#include <bits/stdc++.h>
using namespace std;

int secondSmallest(int arr[], int n)
{
      int smallest = arr[0];
      int secondsmallest = INT_MAX;
      for(int i = 0; i < n; i++)
      {
        if(arr[i] < smallest)
        {
            secondsmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < secondsmallest)
        {
            secondsmallest = arr[i];
        }
      }
      return secondsmallest;
}

int main()
{
    int arr [] = { 12, 45,3,65,23};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << secondSmallest(arr, n);
    return 0;
}