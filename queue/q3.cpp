#include<iostream>
#include<queue>
#include<stack>
#include<algorithm>

using namespace std;

void reveverse_first_k_items(queue<int> q,int n,int k)
{
    stack <int> poped_s;

    for(int i=0;i<k;i++)
    {
        poped_s.push(q.front());
        q.pop();
    } 
    
    while(!poped_s.empty())
    {
        q.push(poped_s.top());
        poped_s.pop();
    }
    
    for(int i=0;i<q.size()-k;i++)
    {
        q.push(q.front());
        q.pop();
    }


    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}

int main()
{
    int n;
    int x;
    int k;
    cin >> n >> k;
    queue <int> q;

    for(int i=0;i<n;i++)
    {
        cin >> x;
        q.push(x);
    }

    reveverse_first_k_items(q,n,k);
}