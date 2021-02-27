//Class Templates

#include<iostream>
using namespace std;

template <typename T> 
class Pair
{
    private:
        T x,y;
    public:
        Pair(T i, T j)
        {
            x=i;y=j;
        }
        T get_first()
        {
            return x;
        }
        T get_second()
        {
            return y;
        }
};

int main()
{
    Pair <int> p1(10,20),p2(30,40);
    cout << p1.get_first() << endl;
    cout << p2.get_second() << endl;
}