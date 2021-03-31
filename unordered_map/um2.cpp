#include<bits/stdc++.h>

using namespace std;

void frequencies(string s)
{
    unordered_map <string,int> freq;
    stringstream split(s);

    string word;

    while(split >> word)
    {
        freq[word]++;
    }

    for(auto x:freq)
        cout << x.first << " " << x.second << endl;

}

int main()
{
    string s;
    getline(cin,s);

    frequencies(s);
}