#include<bits/stdc++.h>

using namespace std;



int main()
{
    string s;
    getline(cin,s);

    stringstream split(s);
    string word;
    int count(0);
    while(split >> word)
    {
        cout << word << endl;
        count ++;
    }

    cout << "The no. of words in the sentence is " << count << endl;

}