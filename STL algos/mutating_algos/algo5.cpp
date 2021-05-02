#include<bits/stdc++.h>

using namespace std;

int choc_distribution(vector <int> v,int m)
{
    if(m>v.size( ))
        return -1;
    sort(v.begin(),v.end());
    int min_diff(99999);
    for(int i=0;i<v.size()-m+1;i++)
    {
        int res = v[i+m-1] - v[i];
        min_diff = min(res,min_diff);
    }

    return min_diff;
}

int main()
{
    int n,m,x;
    vector <int> v;
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        v.push_back(x);
    }

    cout << choc_distribution(v,m);





}