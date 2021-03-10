#include<iostream>
#include<stack>
#include<string>
#include<algorithm>

using namespace std;


string reverse_string(string s)
{
    stack <char> st;
    for(int i=0;i<s.length();i++)
    {
        st.push(s[i]);
    }
    string r;
    r="";
    while(!st.empty())
    {
        r=r+st.top();
        st.pop();
    }
    return r;  
}

int main()
{
    string s;

    cin >> s;
    reverse(s.begin(),s.end());
    cout << s << endl;
    cout << reverse_string(s);
}