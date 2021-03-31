#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

int main()
{
    unordered_map <string,int> m;
    m["Prakash"] = 1;
    m["Bindu"] = 2;
    m["Prashant"] = 3;
    m["Prameet"] = 4;

    m.insert({"Toomy",5});

    for(auto x:m)
    {
        cout << x.first << " " << x.second << endl;
    }

    if(m.find("Prameset") != m.end())
    {
        cout << "KEY FOUND" <<  endl;
    }
        
    else
        cout << "KEY NOT FOUND" << endl;


    cout << m.size() << endl;


    m.erase(m.begin(),m.end()); 
    cout << m.size() << endl;


}