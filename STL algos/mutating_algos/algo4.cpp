//Fractional Knapsack 
#include<bits/stdc++.h>

using namespace std;

bool mycomp(pair <int,int> p1,pair <int,int> p2)
{
    double r1 = (double)p1.first/p1.second;
    double r2 = (double)p2.first/p2.second;

    return r1 > r2;

}

int my_func(vector <pair <int,int>> items,int w)
{
    sort(items.begin(),items.end(),mycomp);
    int value(0);
    int quantity(0);
    for(int i=0;i<items.size();i++)
    {
        if(items[i].second <= w)
        {
            value += items[i].first;
            w -= items[i].second;
        }
        else
        {
            value += (items[i].first/items[i].second)*(double)w;
            break;
        }

    }
    return value;
}


int main()
{    
    int n;
    int x,y;
    int w;
    cin >> n;
    cin >> w;
    pair <int,int> p;
    vector < pair <int,int>> items;
    for(int i=0;i<n;i++)
    {
        cin >> x >> y;
        p = make_pair(x,y);
        items.push_back(p);
    }

    cout << my_func(items,w);
}