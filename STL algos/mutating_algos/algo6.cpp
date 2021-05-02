#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> v = {15,6,7,12,30};
    make_heap(v.begin(),v.end()); // default is max heap
    
    for(auto x:v)
        cout << x << " ";

    cout << endl;
   
    pop_heap(v.begin(),v.end());

    cout << v.front() << endl;
    v[4] = 13;

    push_heap(v.begin(),v.end());

    for(auto x:v)
        cout << x << " ";


    /*vector <int> v1 = {15,6,7,12,30};
    make_heap(v1.begin(),v1.end(),greater <int> ()); // min heap
    
    for(auto x:v1)
        cout << x << " ";*/
}