//some basic operations using vector like insert erase and empty resize etc.
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> v{10,5,15,20};
    v.insert(v.begin(),100);
    v.insert(v.begin()+2,200);
    v.insert(v.begin(),2,300); // inserts 100 at starting position for 2 times 
    for (auto x:v)
    {
        cout << x << " ";
    }
    cout << endl;

    vector <int> v1{10,5,15,20};
    v1.erase(v1.begin());
    for (auto x:v1)
    {
        cout << x << " ";
    }
    cout << endl;
    v1.erase(v1.begin(),v1.end()-1);
    for (auto x:v1)
    {
        cout << x << " ";
    }
    cout << endl;

    vector <int> v2 {5,10,15,20};
    v2.resize(3);
    for (auto x:v2)
    {
        cout << x << " ";
    }
    cout << endl;
    v2.resize(10,100);
    for (auto x:v2)
    {
        cout << x << " ";
    }
    cout << endl;
     

}