#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> v = {5,10,7,10,20};
    auto it = find(v.begin(),v.end(),20);
    if(it == v.end())
        cout << " NOT FOUND" << endl;
    else
        cout << "FOUND AT " << it-v.begin() << endl;

    int arr[] = {5,10,16, 15 ,19,120};
    int *p =  find(arr,arr+6,16 );
    if(p == arr+6)
        cout << "NOT FOUND" << endl;
    else
        cout << "FOUND AT " << p-arr << endl;
}   