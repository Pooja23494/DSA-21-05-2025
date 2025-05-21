// Substraction through pointer

#include<iostream>
using namespace std;

int main()
{
    int a,b,sub;
    int *ptrA,*ptrB;

    cout<<"Enter value of A: ";
    cin>>a;

    cout<<"Enter value of B: ";
    cin>>b;

    ptrA=&a;
    ptrB=&b;

    sub=*ptrA-*ptrB;

    cout<<"Substraction of "<<*ptrA<<" and "<<*ptrB<<" is: "<<sub;
    
    return 0;
}