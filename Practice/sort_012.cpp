//Given an array A[] consisting 0s, 1s and 2s. The task is to write a function that sorts the given array.
// The functions should put all 0s first, then all 1s and all 2s in last.

#include<iostream>
#include<vector>

using namespace std;

vector <int> sort_012(vector <int> v)
{
    vector <int> count(3,0);

    for(int i=0;i<v.size();i++)
    {
        count[v[i]]++;
    }

    v.clear();

    for(int i=0;i<count[0];i++)
        v.push_back(0);

    for(int i=0;i<count[1];i++)
        v.push_back(1);
    
    for(int i=0;i<count[2];i++)
        v.push_back(2);

    return v;
}

int main()
{
    int n,x;
    cin >> n;
    vector <int> v;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        v.push_back(x);
    }

    v = sort_012(v);

    for(auto x:v)
        cout << x << " ";
 
}