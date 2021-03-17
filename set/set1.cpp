#include<iostream>
#include<set>

using namespace std;

int main()
{
    set <int > s_increasing;
    s_increasing.insert(10);
    s_increasing.insert(20);
    s_increasing.insert(1);
    s_increasing.insert(13);
    s_increasing.insert(13);
    s_increasing.insert(80);

    for(auto i:s_increasing)
        cout << i << " ";

    cout << endl;
    set <int , greater <int>> s_decreasing;
    s_decreasing.insert(10);
    s_decreasing.insert(20);
    s_decreasing.insert(1);
    s_decreasing.insert(13);
    s_decreasing.insert(13);
    s_decreasing.insert(80);

    for(auto i = s_decreasing.begin();i!=s_decreasing.end();i++)
    {
        cout << *i << " ";
    }

    cout << endl;

    auto it = s_increasing.find(10);
    if(it == s_increasing.end())
        cout << "10 not found";
    else    
        cout << "10 found";

    cout << endl;

    cout << s_increasing.count(10); // count method return the count of a specific element in set 
     
    s_increasing.erase(13);

    cout << endl;

    for(auto k:s_increasing)
        cout << k << " ";
    
    
}