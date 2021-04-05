//Given an array of integers and a number K. Find the count of distinct elements in every window of size K in the array.

#include<bits/stdc++.h>

using namespace std;

void count_distinct_in_window(vector <int> v,int k)
{
    unordered_map <int,int> m;
    for(int i=0;i<v.size()-k+1;i++)
    {
        m.clear();

        int temp = k;
        for(int j=i;j<i+k;j++)
        {
            m[v[j]]++;
        }

        cout << m.size() << " ";
    }

    
    cout << endl;
}

void count_distinct_in_window_optim(vector <int> v,int k)
{
    unordered_map <int,int> m;

    for(int i=0;i<k;i++)
    {
        m[v[i]]++;
    }

    cout << m.size() << " ";

    for(int i=k;i<v.size();i++)
    {
        m[v[i-k]]--;
        if(m[v[i-k]] == 0)
        {
            m.erase(v[i-k]);
        }
        m[v[i]]++;
        cout << m.size() << " ";
    }
}


int main()
{
    int n,x,k;
    cin >> n >> k;

    vector <int> v;

    for(int i=0;i<n;i++)
    {
        cin >> x;
        v.push_back(x);
    }

    count_distinct_in_window_optim(v,k);
}