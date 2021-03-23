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

    if(s.find(15) == s.end())
        cout << "Not Found" << endl;
    else    
        cout << "Found" << endl;

    cout << s.count(10) << endl;

    cout << s.size() << endl;
    s.erase(10);
    cout << s.size() << endl;
    s.erase(s.begin(),s.end());
    cout << s.size() << endl;


}