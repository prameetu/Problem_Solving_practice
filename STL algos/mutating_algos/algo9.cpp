//SORT ELEMENTS USING FREQUENCY
#include<bits/stdc++.h>

using namespace std;

bool mycomp(pair <int,int> p1,pair <int,int> p2)
{
    if(p1.second == p2.second)
        return p1.first < p2.first;
    else
        return p1.second > p2.second;
}


void sort_elemnents_by_frequency(vector <int> v)
{
    unordered_map <int,int> m;
    for(int i=0;i<v.size();i++)
    {
        m[v[i]]++;
    }

    //for(auto x:m)
    //    cout << x.first << " " << x.second << endl;

    vector <pair <int,int>> vp;

    for(auto x:m)
        vp.push_back(x);
    
    sort(vp.begin(),vp.end(),mycomp);

    for(auto x:vp)
        for(int i=0;i<x.second;i++)
        {
            cout << x.first << " ";
        }

    
    
}

int main()
{
    int n,x;
    cin >> n;
    vector <int> v;
    while(n--)
    {
        cin >> x;
        v.push_back(x);
    }

    sort_elemnents_by_frequency(v);
}