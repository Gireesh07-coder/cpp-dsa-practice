#include<bits/stdc++.h>
using namespace std;

void countNumbers(int arr[], int n)
{
    int count_positive = 0;
    int count_negative = 0;
    int count_zeros = 0;
    for(int i = 0;i < n;i++)
    {
        if(arr[i] > 0)
        {
            count_positive +=1;
        }
        else if(arr[i] < 0)
        {
            count_negative +=1;
        }
        else
        {
            count_zeros +=1;
        }
    }
    cout << " Positive : " << count_positive << endl; 
    cout << " Negative : " <<count_negative <<endl; 
    cout << " Zeros : " << count_zeros << endl; 
}
int main()
{
    int n;
    cin >> n ;

    int arr[n];
    for(int i = 0;i < n; i++)
    {
        cin >> arr[i];
    }
    countNumbers(arr, n);
    return 0;
}

//Time Complexity : O(n)
//Space Complexity : O(n)
    