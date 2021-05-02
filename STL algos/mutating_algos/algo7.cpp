//Merge two sorted arrays inplace i.e. without using extra space
#include<bits/stdc++.h>

using namespace std;

void merge_inplace(vector <int> v1,vector <int> v2)
{
    int x;
    for(int i=0 ;i<v1.size();i++)
    {
        v2.push_back(v1[i]);
    }
    make_heap(v2.begin(),v2.end());
    sort_heap(v2.begin(),v2.end());

    for(auto x:v2)
        cout << x << " ";
}


int main()
{
    int m,n;
    cin >> m >> n;
    int x;
    vector <int> v1;
    vector <int> v2;

    while(m--)
    {
        cin >> x;
        v1.push_back(x);
    }

    while(n--)
    {
        cin >> x;
        v2.push_back(x);
    }

    merge_inplace(v1,v2);
    



}