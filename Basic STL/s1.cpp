#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> a;
    
    for(int i=4;i>=1;i--)
    {
        a.push_back(i);
    }
    sort(a.begin(),a.end());
    for(auto i=a.begin();i!=a.end();i++)
    {
        cout << *i;
    }

    cout << endl;

    if(binary_search(a.begin(),a.end(),6))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "Not found!";
    }
}