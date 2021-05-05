//anagram check 
#include<bits/stdc++.h>

using namespace std;

bool anagram_check(string &s1,string &s2)
{
    if(s1.size() != s2.size())
        return false;
    
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    for(int i=0;i<s1.size();i++)
    {
        if(s1[i] != s2[i])
            return false;
    }

    return true;

}

bool anagram_check_optimized(string &s1,string &s2)
{
    if(s1.size() != s2.size())
        return false;
    
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    vector <int> v(123,0);
    for(auto x:s1)
        v[x]++;
    for(auto x:s2)
        v[x]--;
    for(int i=0;i<v.size();i++){
        if(v[i] != 0)
            return false;
    }

    return true;



}

int main()
{
    string s1;
    string s2;
    getline(cin,s1);
    getline(cin,s2);
    if(anagram_check_optimized(s1,s2))
        cout << "The strings are anagram ";
    else
        cout << "They are not anagram";

}