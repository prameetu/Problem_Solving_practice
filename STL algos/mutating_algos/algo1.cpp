#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> v{10,20,20,50,6,91,3};
    vector <int> v1{10,20,20,50,6,91,3};


    sort(v.begin(),v.end());
    sort(v1.begin(),v1.end(),greater <int>());
    
    for(auto x:v)
        cout << x << " ";
    
    cout << endl << "IN DESCENDING ORDER: "  ;

    for(auto x:v1)
        cout << x << " ";
}