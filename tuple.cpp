#include<iostream>
#include<tuple>
#include<string>
#include<bits/stdc++.h>


using namespace std;

int main()
{
    tuple <string,int,string> t = make_tuple("abc",10,"def");
    cout << get<0>(t) << " " <<get<1>(t) << " " << get<2>(t);
    get<0>(t) = "pqr";
    cout << endl << get<0>(t);
    cout << tuple_size<decltype(t)>::value << endl; // used to find size of tuple

    char x;
    int y,z;

    tie(x,ignore,z) = t;

    tuple <string,int,string> t1 = make_tuple("abc",10,"def");
    tuple <string,int> t2 = make_tuple("ghi",10);

    auto t3 = tuple_cat(t1,t2);
    




}