#include<iostream>
#include<unordered_set>

using namespace std;

int main()
{
    unordered_set <int > s;
    s.insert(10);
    s.insert(5);
    s.insert(12);
    s.insert(15);
    s.insert(50);

    for (auto x:s)
        cout << x << " ";

    cout << endl;

    for(auto it = s.begin(); it != s.end();it++)
    {
        cout << *it << " ";
    }



}