//finding one extra character in the second string
#include<bits/stdc++.h>
using namespace std;


//time complexity - O(nlogn)
char extra_character(string s1,string s2)
{
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    for(int i=0;i<s1.length();i++)
    {
        if(s1[i] != s2[i])
            return s2[i];
    }
    return s2[s1.length()];
}

char extra_char_optimized(const string &s1,const string &s2)
{
    vector <int> v(123,0);
    for(auto x:s1)
        v[x]++;

    for(auto x:s2)
        v[x]--;

    for(int i=0;v.size();i++)
    {
        if(v[i] != 0)
            return (char)i;
    }
}

int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    cout <<"The extra charcter in the second string is: "<< extra_char_optimized(s1,s2) << endl;
}