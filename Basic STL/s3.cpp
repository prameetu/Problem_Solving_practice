//Templates in C++

#include<bits/stdc++.h>

using namespace std;

template <typename T>
T my_max(T x,T y)
{
    return (x>y)?x:y;
}

int main()
{
    cout << my_max <int> (3,7) << endl;
    cout << my_max <float> (5.7,8.9) << endl;
} 