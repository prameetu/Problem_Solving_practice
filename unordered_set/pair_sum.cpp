#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

bool pair_sum(vector <int> v,int k)
{
    unordered_set <int> s;
    
    for(int i=0;i<v.size();i++)
    {
        if(s.find(k-v[i]) != s.end())
            return true;
        else    
            s.insert(v[i]);
    }

    return false;
    
}


int main()
{
    int n,x,k;
    cin >> n >> k;
    vector <int> v;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        v.push_back(x);
    }

    cout << pair_sum(v,k);

}