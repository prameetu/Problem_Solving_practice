#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

void max_type(vector <int> v,int k)
{
    unordered_set <int> s;
    int r = v.size() / k;

    for(int i=0;i<v.size();i++)
    {
        s.insert(v[i]);
    }

    if(r > s.size())
        cout << s.size();
    else    
        cout << r;
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

    max_type(v,k);

}