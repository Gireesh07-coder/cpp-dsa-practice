#include<bits/stdc++.h>
using namespace std;

void printF(int index, vector<int> &ds, int arr[], int n)
{
    if(index == n)
    {
        for(auto it : ds)
        {
            cout << it << " " ;
        }
        if(ds.size() == 0)
        {
            cout << "{}";
        }
        cout << endl;
        return;
    }
    
    printF(index + 1, ds, arr, n);
    
    //take or pick the particular index into the subsequence
    ds.push_back(arr[index]);
    
    printF(index + 1, ds, arr, n);
    
    ds.pop_back();

    // not pick or not take condition,this element is not added to your subsequence
}


int main()
{
    int arr[] ={3, 1, 2};
    int n = 3;
    vector<int> ds ;
    printF(0, ds, arr, n);
    return 0;
}