#include<bits/stdc++.h>

#define rep(i,a,b) for(int i=a;i<b;i++)
#define long long ll

using namespace std;

void winner(vector <string> v)
{
    unordered_map <string,int> m;
    rep(i,0,v.size())
    {
        m[v[i]]++;
    }

    int max_vote = 0;
    string winner;
    for(auto x:m)
    {
        if(x.second > max_vote)
        {
            max_vote = x.second;
            winner = x.first;
        }
    }

    cout << winner << " " << max_vote << endl;
}

int main()
{
    int n;
    string x;
    cin >> n;
    vector <string> v;
    rep(i,0,n)
    {
        cin >> x;
        v.push_back(x);
    }

    winner(v);

}
