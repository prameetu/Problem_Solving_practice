#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>

using namespace std;

void sort_char(vector <char> v_char,vector <int> v_num,int n)
{
    pair <int,char> p[n];
    for(int i=0;i<n;i++)
    {
        p[i] = {v_num[i],v_char[i]};
    }
    sort(p,p+n);
    vector <char> sorted;
    for(int i=0;i<n;i++)
    {
        sorted.push_back(p[i].second);
    }

    for(auto i=sorted.begin();i!=sorted.end();i++)
    {
        cout << *i << " ";
    }

}

int main()
{
    int n;
    cout << "Eneter value of n";
    cin >> n;
    vector <int> v_num;
    vector <char> v_char;

    char c;
    cout << "Eneter values of char array";
    for(int i=0;i<n;i++)
    {
        cin>> c;
        v_char.push_back(c);
    }

    int t;
    cout << "Eneter values of num array";
    for(int i=0;i<n;i++)
    {
        cin>> t;
        v_num.push_back(t);
    }

   sort_char(v_char,v_num,n);

}