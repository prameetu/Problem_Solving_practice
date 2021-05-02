#include<bits/stdc++.h>

using namespace std;

struct Point 
{
    int x,y;
};

bool mycomp(Point p1,Point p2)
{
    return (p1.x < p2.x);
}
int main()
{
    vector <Point> v { {3,10},
                       {2,8},
                       {5,4},
                       {1,7} };
    sort(v.begin(),v.end(),mycomp);

    for(auto a:v)
        cout << a.x << " " << a.y <<endl;

            
}