//Function tenplates
#include<iostream>

using namespace std;

template <typename T , int limit>
T arr_max(T arr[],int n)
//n in above line can be passed in template and has to be a constant value and can be used for anything in genrale template 
{
    T res = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>res)
            res = arr[i];
    }
    return res;
}

int main()
{
    int arr[] = {10,56,34,32,36};
    cout << arr_max <int,100> (arr,5);
    cout << endl;
    float farr[] = {1.0,5.6,3.4,3.2,3.6};
    cout << arr_max <float,100> (farr,5);

}