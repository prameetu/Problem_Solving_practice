#include<iostream>
#include<map>

using namespace std;

int main()
{
    map <int,int> m;
    m.insert({1,100});
    m[5] = 500;
    m.insert({3,300});
    m.insert({3,800});
    for(auto x : m)
    {
        cout << x.first << " " << x.second << endl; 
    }

    cout << endl;

    map <int,int> m1;
    m1.insert({10,200});
    cout << m1.size() << " " ;
    m1[20] = 400;
    m1[30] = 600;
    m1[40] = 800;
    cout << m1.size() << endl;
    for(auto it = m1.begin();it!= m1.end();it++)
    {
        cout << (*it).first << " " << (*it).second << "----";
    }
    return 0;
}