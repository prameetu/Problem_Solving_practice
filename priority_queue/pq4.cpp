#include<iostream>
#include<queue>

using namespace std;

void k_largest_elements(vector <int> v,int k)
{
    priority_queue <int> pq(v.begin(),v.end());
    for(int i=0;i<k;i++)
    {
        cout << pq.top() << endl;
        pq.pop();
    }
}

void k_smallest_elements(vector <int> v,int k)
{
    priority_queue <int,vector<int>,greater<int>> pq(v.begin(),v.end());
    for(int i=0;i<k;i++)
    {
        cout << pq.top() << endl;
        pq.pop();
    }
}

int main()
{
    int n,x,k;
    vector <int> v;
    cin >> n >> k;
    for (int i=0;i<n;i++)
    {
        cin >> x;
        v.push_back(x);
    }
    
    k_smallest_elements(v,k);
}