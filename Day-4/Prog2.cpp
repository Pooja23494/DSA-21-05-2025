// Arithmetic operation.
#include<iostream>
using namespace std;

int main(){
    int a,b,sum,sub,mul,div;

    cout<<"Enter value of A:";
    cin>>a;

    cout<<"Enter value of B:";
    cin>>b;

    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;

    cout<<"*************"<<endl;
    cout<<"Sum:"<<sum<<endl;
    cout<<"Substraction:"<<sub<<endl;
    cout<<"Multiplication:"<<mul<<endl;
    cout<<"Division:"<<div<<endl;
    cout<<"*************";

    return 0;
}