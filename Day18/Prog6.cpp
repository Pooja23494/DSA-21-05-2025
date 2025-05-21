// call by constant variable

#include<iostream>
using namespace std;

void increment(const int &n)
{
    n = n + 10;
}
int main(){

    int a=10;

    cout<<"Before: "<<a<<endl;
    increment(a);
    cout<<"After: "<<a<<endl;
    return 0;
}