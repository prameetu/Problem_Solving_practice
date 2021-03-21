#include<iostream>
#include<map>

using namespace std;

int main()
{
    multimap <int,int> mp;
    mp.insert({10,20});
    mp.insert({1,2});
    mp.insert({10,20});
    mp.insert({12,24});
    mp.insert({10,30});

    for (auto x:mp)
        cout << x.first << " " << x.second << endl;
    
    cout << mp.count(10) << endl; 
    cout << (*mp.lower_bound(10)).first << " " <<  (*mp.lower_bound(10)).second << endl;
    cout << (*mp.upper_bound(10)).first << " " <<  (*mp.upper_bound(10)).second << endl;
    cout << endl;
    auto it = mp.equal_range(12);

    for(auto itr = it.first;itr != it.second;itr++)
    {
        cout << itr->first << " " << itr->second <<endl;
    }
}
