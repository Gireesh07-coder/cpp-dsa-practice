#include<bits/stdc++.h>
using namespace std;

//Multiple Recursion call
int f(int n)
{
    if(n <= 1)
      return 1;
    int last = f(n - 1);
    int slast = f(n -2);
    return last + slast ;
}



int main()
{
    int n = 4;
    cout <<f(n);
    return 0;
}


/* f(index,[],arr)
{
    if(index >= arr.size())
      print([])
      return ;
    [].add(arr[index])
    f(index+1,[])
    [].remove(arr[index])
    f(index+1,[])
}
main()
{
    arr = {3 , 1 ,2}
    f(0,[],arr)
} */