#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Gireesh";
    sort(s.begin(),s.end());
     cout<< s;
    cout << s.size() << " " << s.front() << s.back() << s.find('t') << " \n";
    string t =s.substr(0,4);
    sort(s.begin(),s.end());
    cout<<t;
}