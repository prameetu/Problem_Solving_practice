//pangram chech for a string

#include<bits/stdc++.h>

using namespace std;

bool pangram_check(string &s1)
{
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    vector <int> v(123,0);
    for(auto x:s1)
    {
        v[x]++;
    }
    for(int i=97;i<v.size();i++)
    {
        if(v[i] == 0)
            return false;
    }

    return true;

}
int main()
{
    string s;
    getline(cin,s);
    cout << pangram_check(s);

}