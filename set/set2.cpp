#include<iostream>
#include<set>

using namespace std;

int main()
{
    set<int> s;
    s.insert(1);
    s.insert(10);
    s.insert(20);
    s.insert(8);
    s.insert(32);
    s.insert(16);
    
    auto it = s.lower_bound(16);
    cout << *it << endl;
    it = s.lower_bound(18);
    cout << *it << endl;
    it = s.lower_bound(34);
    if(it == s.end())
        cout << "Given element is gretaer than largest" << endl;

    //upper_bound()

    auto it1 = s.upper_bound(10);
    cout << *it1 << endl;
    it1 = s.upper_bound(18);
    cout << *it1 << endl;
    it1 = s.upper_bound(34);
    if(it == s.end())
        cout << "Given element is gretaer than largest" << endl;


    for(auto i:s)
        cout << i << " ";

}