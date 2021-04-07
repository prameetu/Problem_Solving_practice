#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> v1= {10,20,30,40,50};
    vector <int> v2= {20,10,30,40,50};
    vector <int> v3= {20,20,30,40,50};

    if(is_permutation(v1.begin(),v1.end(),v2.begin()))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;


    if(is_permutation(v1.begin(),v1.end(),v3.begin()))
        cout << "YES" << endl;
     else
        cout << "NO" << endl;


} 