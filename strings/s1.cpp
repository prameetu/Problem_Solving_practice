#include<bits/stdc++.h>

using namespace std;

void my_func(string txt,string pat)
{
   int pos = txt.find(pat);

    while(pos != string::npos)
    {
        cout << pos << " ";
        pos = txt.find(pat,pos+1);
    }
}

int main()
{
    string txt,pat;
    getline(cin,txt);
    getline(cin,pat);

    my_func(txt,pat);


}