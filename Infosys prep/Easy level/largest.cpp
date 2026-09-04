#include<iostream>
using namespace std;

int largest(int arr[], int n)
{
      int largest = arr[0];
      for(int i = 0; i < n; i++)
      {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
      }
      return largest;
}

int main()
{
    int arr [] = { 12, 45,3,65,23};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << largest(arr, n);
    return 0;
}