// Chain of pointer

#include<iostream>
using namespace std;

int main(){

    int n;
    int *a,**b,***c;

    cout<<"Enter Number: ";
    cin>>n;

    a=&n;
    b=&a;
    c=&b;

    cout<<"Value of number: "<<*a<<endl;
    cout<<"Value of number: "<<**b<<endl;
    cout<<"Value of number: "<<***c<<endl;

    cout<<"Value of number: "<<a<<endl;
    cout<<"Value of number: "<<*b<<endl;
    cout<<"Value of number: "<<**c<<endl;

    return 0;
}