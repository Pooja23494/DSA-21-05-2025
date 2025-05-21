// Print which value is max A, B, C.
#include<iostream>
using namespace std;

int main(){

    int a,b,c;

    cout<<"Enter value of A: ";
    cin>>a;
    cout<<"Enter value of B: ";
    cin>>b;
    cout<<"Enter value of C: ";
    cin>>c;

    a>b
        ?a>c
            ? cout<<"A is max"
            : cout<<"C is max"
        :b>c
            ? cout<<"B is max"
            : cout<<"C is max";
            
    return 0;
}