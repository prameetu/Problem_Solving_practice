//The thief problem -- K largest elements sum
//This is of complexity O(nlogn)
// Better complexity is done using priority queue

#include<bits/stdc++.h>

using namespace std;

int my_func(vector <int> v,int k)
{
    sort(v.begin(),v.end(),greater <int> ());
    int sum(0);
    for(int i=0;i<k;i++)
    {
        sum += v[i];
    }

    return sum;
}

int main()
{
    vector <int> v;
    int n,x,k;
    cin >> n >> k;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        v.push_back(x);
    }

    cout << my_func(v,k);
}
