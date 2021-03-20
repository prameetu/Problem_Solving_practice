//COUNT GREATER ELEMENTS 
#include<iostream>
#include<vector>
#include<map>
using namespace std;

void count_greater_elements(vector <int> v)
{
    map <int,int> m;
    for(int i=0;i<v.size();i++)
    {
        m[v[i]]++;
    }
    
    int sum=v.size();
    int temp;
    
    for(auto x:m)
    {
        temp = m[x.first] ;
        m[x.first] = sum - m[x.first];
        sum = sum - temp;
    }

    for(auto x:v)
    {
        cout << m[x] << " "; 
    }

    
    
}

int main()
{
    int n,x;
    vector <int> v;
    cin >> n;
    while(n--)
    {
        cin >> x;
        v.push_back(x);
    }

    count_greater_elements(v);


}