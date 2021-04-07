//min_element() max_element
#include<bits/stdc++.h>

using namespace std;

struct Point
{
    int x;
    int y;
    Point(int i,int j)
    {
        x=i;
        y=j;
    }
};

bool mycmp(Point p1,Point p2)
{
    return p1.x < p2.x;
}


int main()
{
    vector <int> v = {10,20,20,40,100};

    cout << *max_element(v.begin(),v.end()) << endl;
    cout << *min_element(v.begin(),v.end()) << endl;

    int arr[] = {20,50,80,78,300};

    cout << *max_element(arr,arr+5) << endl;
    cout << *min_element(arr,arr+6) << endl;

    vector <Point> points = {{5,4},{2,300},{90,4}};

    auto it = max_element(points.begin(),points.end(),mycmp);
    cout << it->x << " " << it->y << endl;

    it = min_element(points.begin(),points.end(),mycmp);
    cout << it->x << " " << it->y << endl;
}