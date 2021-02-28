//COMPARISON OPERATORS and Some Basic Functions
#include<iostream>
#include<utility>

using namespace std;

int main()
{
    pair <int,int> p1(1,12), p2(9,12);

    cout << (p1 == p2) << endl;
    cout << (p1 >= p2) << endl;
    cout << (p1 <= p2) << endl;

    cout << "BEFOR SWAPPING " << endl;
    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;

    p1.swap(p2);
    cout << "AFTER SWAPPING " << endl;
    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;



}