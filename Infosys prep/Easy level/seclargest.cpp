#include<bits/stdc++.h>
using namespace std;

int secLargest(int arr[], int n)
{
      int largest = arr[0];
      int secondlargest = INT_MIN;
      for(int i = 1; i < n; i++)
      {
        if(arr[i] > largest)
        {
            secondlargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondlargest)
        {
            secondlargest = arr[i];
        }
      }
      return secondlargest;
}

int main()
{
    int arr [] = { 100, 50, 40, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << secLargest(arr, n);
    return 0;
}