//SOrting using priority queue

#include<iostream>
#include<queue>
#include<string>
#include<vector>

using namespace std;

vector <int> sort(vector <int> v,int n)
{
    priority_queue <int,vector <int>,greater <int>> pq(v.begin(),v.end());
    vector <int> v2;
    while(!pq.empty())
    {
        v2.push_back(pq.top());
        pq.pop();
    }

    return v2;
    
}

int main()
{
    int n,x;
    vector <int> v;
    cin >> n ;
    for (int i=0;i<n;i++)
    {
        cin >> x;
        v.push_back(x);
    }

    vector <int> v2 = sort(v,n);
    for(auto i:v2)
        cout << i << " ";
}
