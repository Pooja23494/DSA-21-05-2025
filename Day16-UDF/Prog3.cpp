// TSRN

#include<iostream>
using namespace std;

void multiplication(int a,int b)
{
    cout<<"Multiplication: "<<a*b;
}
int main()
{
    int a,b;
    cout<<"Enter A: ";
    cin>>a;
    cout<<"Enter B: ";
    cin>>b;

    multiplication(a,b);
    return 0;
}