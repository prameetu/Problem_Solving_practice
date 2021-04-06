//lower_bound in STL
//lower bound uses binary search internally hence uses O(logn) time ! 
//expects a sorted  container

//upper bound uses binary search internally hence uses O(logn) time ! 
//expects a sorted  container

#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> v = {10,20,20,20,30,40};  
    auto  it = lower_bound(v.begin(),v.end(),20);
    cout << it-v.begin() << " " << *it << endl;

    it = lower_bound(v.begin(),v.end(),25);        
    cout << it-v.begin() << " " << *it << endl;

    it = lower_bound(v.begin(),v.end(),45);        
    cout << it-v.begin() << " " << *it << endl;

    it = upper_bound(v.begin(),v.end(),20);
    cout << it-v.begin() << " " << *it << endl;

    it = upper_bound(v.begin(),v.end(),30);
    cout << it-v.begin() << " " << *it << endl;

    //COUNTS OCCURENCES OF 20
    auto it1 = lower_bound(v.begin(),v.end(),20);
    auto it2 = upper_bound(v.begin(),v.end(),20);

    cout << it2-it1 << endl;



}