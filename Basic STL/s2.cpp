//ITERATORS

#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> v;
    int x;
    for(int i=0;i<5;i++)
    {   
        cin >> x;
        v.push_back(x);
    }

    for(auto i=v.begin();i!=v.end();i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    vector <int> ::iterator i = v.begin();
    cout << *i << endl;
    i++;
    cout << *i << endl;
    i=v.end();
    cout << *i << endl;


}