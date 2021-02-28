#include<iostream>
#include<vector>

using namespace std;
void func(vector <int> &v)
{
    v.push_back(9);
    v.push_back(10);
}

int main()
{
    vector <int> v {5,6,7,8};
    func(v);
    for(int x:v)
        cout << x << " ";
}