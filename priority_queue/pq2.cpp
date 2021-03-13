
#include<iostream>
#include<queue>

using namespace std;

int main()
{
    //Priority queue implementing min heap
    priority_queue  <int,vector <int>,greater<int>> pq;
    pq.push(10);
    pq.push(15);
    pq.push(11);
    pq.push(20);
    pq.push(2);

    cout << pq.size() << " ";
    cout << pq.top()  << " " << endl;
    while(!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    cout << endl;
    //Creating pq out of vector
    vector <int> v{12,13,56,32,1};
    priority_queue <int> pq1(v.begin(),v.end());
    while(!pq1.empty())
    {
        cout << pq1.top() << " ";
        pq1.pop();
    }

}