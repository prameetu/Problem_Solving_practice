#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque <int> d{10,15,20};
    d.push_front(5);
    d.push_back(50);

    for(auto i:d)
    {
        cout << i << " ";
    }

    cout << endl;

    deque <int> dq ={10,15,30,5,12};
    auto it = dq.begin();
    it++;
    dq.insert(it,20);
    dq.pop_front();
    dq.pop_back();

    for(auto i:dq)
    {
        cout << i << " ";
    }

}