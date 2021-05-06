#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << __builtin_popcount(n);//inputs set bit of the number in its binary form
}