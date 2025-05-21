// TNRS

#include<iostream>
using namespace std;

int division()
{
    int a,b;
    cout<<"Enter A: ";
    cin>>a;
    cout<<"Enter B: ";
    cin>>b;
    return a / b;
}

int main()
{
    cout<<"Division: "<<division();
    return 0;
}