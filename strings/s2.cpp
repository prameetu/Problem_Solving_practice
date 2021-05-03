//Find number after decimal
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string n;
    getline(cin,n);
    int x = n.find(".");
    cout << n.substr(x+1);
}