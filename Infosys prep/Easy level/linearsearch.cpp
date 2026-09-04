#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[],int n, int target)
{
   for(int i = 0;i < n; i++)
   {
    if(arr[i] == target)
    {
        return i;
    }
    
   }
   return -1;
}
int main()
{
    int arr[] = {10, 25, 7, 40, 15};
    int n =sizeof(arr) / sizeof(arr[0]);
    int result = linearSearch(arr, n, 49);
    if(result != -1)
    {
        cout<< "Target element is present in the array at index " << result;
    }
    else
    {
        cout << "Target element is not present in the array ";
    }
    return 0;
}