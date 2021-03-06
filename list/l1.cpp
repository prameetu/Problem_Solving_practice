#include<iostream>
#include<forward_list>

using namespace std;

int main()
{
    forward_list <int> f;
    f.assign({10,20,30,40,10,50,10});
    for(auto x:f)
    {
        cout << x << " ";
    }    
    f.remove(10);
    cout << endl;
    for(auto x:f)
    {
        cout << x << " ";
    } 

    forward_list <int> f2;
    f2.assign(f.begin(),f.end());

    cout << endl;
    for(auto x:f2)
    {
        cout << x << " ";
    } 

    forward_list <int> f3;
    f3.assign(3,10);
    cout << endl;
    for(auto x:f3)
    {
        cout << x << " ";
    } 

}