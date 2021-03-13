//PURCHASING MAXIMUM ITEMS WITH A GIVEN AMOUNT OF SUM

#include<iostream>
#include<queue>

using namespace std;

void purchasing_max_items(vector <int> v,int sum)
{
    priority_queue <int,vector <int>,greater <int>> pq(v.begin(),v.end());
    int count = 0;
    while(sum >=0 && !pq.empty() && pq.top() <= sum)
    {
        sum = sum-pq.top();
        pq.pop();
        count++;
    }

    cout << count;
}

int main()
{
    int n,x,sum;
    vector <int> v;
    cin >> n >> sum;
    for (int i=0;i<n;i++)
    {
        cin >> x;
        v.push_back(x);
    }
    
    purchasing_max_items(v,sum);
}