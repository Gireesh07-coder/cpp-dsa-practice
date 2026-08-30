#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v={1,2,3,4};

    for(int x: v)
    {
        cout << x << " ";
    }
    cout << "\n" ;
    cout << v.front()<<" \n";
    cout << v.back() << "\n ";
    cout << v.size() << " \n ";
    cout << v.empty() << "\n ";
    
    v.push_back(12);
    v.push_back(23);
    
    
    for(int x:v)
    {
        cout << x << " ";
    }
    return 0;
}