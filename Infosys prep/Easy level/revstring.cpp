#include<bits/stdc++.h>

using namespace std;

//Using Two-pointer approach

void reversestring(string &s)
{
    int left = 0, right = s.length() - 1;

    while(left < right)
    {
        swap(s[left],s[right]);
        left++;
        right--;
    }
}


int main()
{
    string s = "Gireesh";

    reversestring(s);

    cout <<s;
    
    return 0;
}




//Using built-in method
/* string reversestring(string &s)
{
    reverse(s.begin(),s.end());
    return s;
}

int main()
{
    string s = "Gireesh";
    cout<<reversestring(s);
    return 0;
} */