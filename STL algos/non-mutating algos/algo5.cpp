#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> v= {10,20,30,20,20};
    
    cout << count(v.begin(),v.end(),20) << endl;
    cout << count(v.begin(),v.end(),80) << endl;

    cout << count(v.begin(),v.end(),10) << endl;

}