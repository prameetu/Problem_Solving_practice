#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> v;
    int k,n,x;

    cout << "Enter the value of n: ";
    cin >> n;

    for(int i=0;i<n;i++)
    {
        cin >> x;
        v.push_back(x);
    }

    cout << "Enter value pf k: ";
    cin >> k;

    vector <int> smaller_than_k;

    for(int i=0;i<v.size();i++)
    {
        if(v[i] < k)
            smaller_than_k.push_back(v[i]);
    }

    for(int i=0;i<smaller_than_k.size();i++)
    {
        cout << smaller_than_k[i] << " ";
    }



}