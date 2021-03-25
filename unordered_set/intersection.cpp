#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

void intersection(vector <int> v,vector <int> w)
{
    unordered_set <int> s;
    for(auto x: v)
        s.insert(x);
    
    for(int i=0;i<w.size();i++)
    {
        if(s.find(w[i]) != s.end()) 
            cout << w[i] << " ";
    }    
}


int main()
{
    int n,x,m;
    cin >> n >> m;
    vector <int> v;
    vector <int> w;

    for(int i=0;i<n;i++)
    {
        cin >> x;
        v.push_back(x);
    }

    for(int i=0;i<m;i++)
    {
        cin >> x;
        w.push_back(x);
    }

    intersection(v,w);

}