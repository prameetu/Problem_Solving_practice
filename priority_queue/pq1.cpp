#include<iostream>
#include<queue>

using namespace std;

int main()
{
    priority_queue <int> pq;
    pq.push(10);
    pq.push(15);
    pq.push(5);
    pq.push(2);

    cout << pq.size() << endl;
    cout << pq.top() << endl;
    while(!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
}