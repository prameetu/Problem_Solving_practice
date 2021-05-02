//merge function in STL
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> v1 = {1,4,8,34,56,90};
    vector <int> v2 = {2,3,9,54,89,96};
    vector <int> v3(12); // we have to ensure here that teh container in which we are merging we beforhand have the required size

    merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());

    for(auto x:v3)
        cout << x << " ";

    cout << endl;

    int a[] = { 10,20,30};
    int a2[] = {5,15,40,60};
    int a3[7];
    merge(a,a+3,a2,a2+4,a3);
    for(auto x:a3)
        cout << x << " ";
}