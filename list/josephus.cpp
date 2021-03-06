#include<iostream>
#include<list>

using namespace std;

int josephus(int n,int k)
{
    list <int> l;
    for(int i=0;i<n;i++)
    {
        l.push_back(i+1);
    }

    auto it = l.begin();

    while(l.size() != 1)
    {
        for(int c=1;c<k;c++)
        {
            it++;
            if(it == l.end())
                it = l.begin();
        }
        it = l.erase(it);
        if(it == l.end())
            it = l.begin();
        
    }


    return *it;
}

int main()
{
    int n,k;
    cin >> n >> k;
    cout << josephus(n,k);
}
