// Function based Template.

#include<iostream>
using namespace std;

template <typename T>
T add(T a, T b)
{
    return a + b;
}
int main()
{
    int result;
    result = add(10,20);
    cout<<"Sum of a and b: "<<result;
    return 0;
}