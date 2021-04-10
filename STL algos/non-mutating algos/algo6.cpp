//BINARY SEARCH
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> v = {10,20,25,68 ,78,90};
    int x = 20;
    if(binary_search(v.begin(),v.end(),x))
        cout << "Found " << endl;
    else
        cout << "Not Found" << endl;

    int arr[] = {10,20,25,68 ,78,90};
    x=34;
    if(binary_search(arr,arr+6,x))
        cout << "Found " << endl;
    else
        cout << "Not Found" << endl;

}