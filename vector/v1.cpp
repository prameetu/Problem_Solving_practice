#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> v;
    for(int i=0;i<5;i++)
    {
        v.push_back(i);

    }
    for(auto x:v)
    {
        cout << x << " ";
    }
    cout << endl;

    vector <int> v1 {1,3,5,7,9};
    for(auto &x:v1)
    {
        x=10;
    }
    for(auto x:v1)
    {
        cout << x << " ";
    }


    cout << endl;
 
    int n=3,x=10;

    vector <int> v2(n,x);

    for(auto i=v2.begin();i!=v2.end();i++)
    {
        cout << *i << " " << endl;
    }


    cout << endl;

    int arr[] = {10,15,20};
    int  m =sizeof(arr)/sizeof(arr[0]);

    vector <int> v3(arr,arr+m);

    for(auto i=v3.begin();i!=v3.end();i++)
    {
        cout << *i << " " << endl;
    }

}