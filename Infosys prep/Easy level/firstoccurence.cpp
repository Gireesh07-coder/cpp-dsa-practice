#include<bits/stdc++.h>
using namespace std;

int firstOccur(int arr[], int n,int target)
{
    for(int i = 0;i < n;i++)
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
    int n,target;
    cin >> n ;

    int arr[n];
    for(int i = 0;i < n; i++)
    {
        cin >> arr[i];
    }
    cin>>target;
    int result = firstOccur(arr, n, target);
    if(result != -1)
    {
        cout << "Target element is present at index :" << result;
    }
    else
    {
        cout << "Target element is not present in the given array ";
    }
    return 0;
}

//Time Complexity : O(n)
//Space Complexity : O(1)