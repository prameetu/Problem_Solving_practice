#include<bits/stdc++.h>

using namespace std;

int product_fun(int x,int y)
{
    return x*y;
}

int main()
{
    vector <int> v = {10,20,30,40,50,60} ;
    fill(v.begin()+1,v.end()-1,5);
    for(auto x:v)
        cout << x << " ";
    cout << endl;

    int arr[] = {10,20,30,40,50};
    fill(arr,arr+5,6);
    for(auto x:arr)
        cout << x << " ";
    cout << endl;

    //As list is not random access container so we nedd to pass l.begin() and l.end() only not l.begin()+ something
    list <int> l = {10,50,60,70,90};
    fill(l.begin(),l.end(),8);
    for(auto x:l)
        cout << x << " ";
    cout << endl;

    string s = "Prameet";
    fill(s.begin(),s.end(),'g');
    cout << s << endl;

    //ROTATE FUNCTION IN STL
    vector <int> v1 = {10,20,30,40,50,60} ;
    rotate(v1.begin(),v1.begin()+2,v1.end());
    cout << "After Rotation" << endl;
    for(auto x:v1)
        cout << x << " ";
    cout << endl;

    //ACCUMLATE FUNCTION

    vector <int> v2 = {10,20,30,40,50,60} ;
    int res = 0;
    cout <<  accumulate(v2.begin(),v2.end(),res) <<endl;
   
    res = 220;
    cout << accumulate(v2.begin(),v2.end(),res,minus <int>()) << endl;

    res = 1;
    cout << accumulate(v2.begin(),v2.end(),res,product_fun);

}