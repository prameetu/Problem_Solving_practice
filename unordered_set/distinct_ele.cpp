#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

void print_distinct_ele(vector <int> v)
{
    unordered_set<int> distinct;
    for(int i=0;i<v.size();i++)
    {
        if(distinct.find(v[i]) == distinct.end())
        {
            cout << v[i] << " ";
            distinct.insert(v[i]);
        }
        
    }

    
}


int main()
{
    int n,x;
    cin >> n;
    vector <int> v;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        v.push_back(x);
    }

    print_distinct_ele(v);

}