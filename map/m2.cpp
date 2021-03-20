#include<iostream>
#include<map>
 #include<string>

using namespace std;

int main()
{
    map <int,string > m;
    m.insert({1,"Prakash"});
    m.insert({2,"Bindu"});
    m.insert({7,"sibbu"});
    m.insert({10,"prameet"});

    if(m.find(5) != m.end())
        cout << "At 2 is " << m[2];
    else
        cout << "Not Found!" << endl;

    if(m.count(2) == 0)
        cout << "2 not found "; 
    else
        cout << "found" << endl;
    
    auto it = m.lower_bound(2);
    cout << (*it).first << " ";
    it = m.lower_bound(5);
    cout << (*it).first << " ";
    it = m.lower_bound(12);
    if(it == m.end())
        cout << "No greater value than 12";

    cout << endl;
    
    it = m.upper_bound(1);
    cout << (*it).first << " ";
    it = m.upper_bound(5);
    cout << (*it).first << " ";
    it = m.upper_bound(12);
    if(it == m.end())
        cout << "No greater value than 12";

    cout << endl;

    m.erase(m.find(2),m.end());

    for(auto x : m)
    {
        cout << x.first << " " << x.second << endl; 
    }
}