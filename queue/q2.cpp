#include<iostream>
#include<queue>
#include<string>

using namespace std;

void print_first_n(int n)
{
    queue<string> q;
    q.push("5");
    q.push("6");
    for(int i=0;i<n;i++)
    {
        string c = q.front();
        cout << c << " ";
        q.pop();
        q.push(c+"5");
        q.push(c+"6");

    }
}

int main()
{
    int n;
    cin >> n;
    print_first_n(n);
}