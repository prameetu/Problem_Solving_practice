//Checking for balanced parenthesis

#include<iostream>
#include<stack>
#include<algorithm>
#include<string>

using namespace std;

int check_balance_parenthesis(string s)
{
    stack <char> st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == '[' || s[i] == '(' || s[i] == '{')
        {
            st.push(s[i]);
        }

        else if(s[i] == ']' || s[i] == ')' || s[i] == '}')
        {
            if(st.empty())
                return 0;
            if(s[i] == ']')
            {
                if(st.top() == '[')
                    st.pop();
                else
                    return 0;
            }
            if(s[i] == ')')
            {
                if(st.top() == '(')
                    st.pop();
                else
                    return 0;
                
            }
            if(s[i] == '}')
            {
                if(st.top() == '{')
                    st.pop();
                else
                    return 0;
            }
        }
    }

    if(st.empty())
        return 1;
    else
        return 0;
}

int main()
{
    string s;
    cin  >> s;
    int a;
    a =  check_balance_parenthesis(s);
    cout << a ? 'YES' : 'NO';
}