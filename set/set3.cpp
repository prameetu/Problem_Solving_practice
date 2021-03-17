//MULTISET

#include<iostream>
#include<set>
#include<iterator>

using namespace std;

int main()
{
    multiset <int> ms;
    ms.insert(1);
    ms.insert(5);
    ms.insert(10);
    ms.insert(10);
    ms.insert(10);
    ms.insert(15);
    ms.insert(30);

    cout << ms.count(10) << endl ;

    auto it = ms.equal_range(20);
    cout << *it.first << "  " << *it.second << endl;
    for(auto i : ms)
        cout << i << " ";

}