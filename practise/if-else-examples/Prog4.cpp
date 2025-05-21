// Compare two numbers and print the larger one.

#include<iostream>
using namespace std;

int main(){

    int num1,num2;

    cout<<"Enter Number 1: ";
    cin>>num1;

    cout<<"Enter Number 2: ";
    cin>>num2;

    if(num1>num2)
    {
        cout<<"Number "<<num1<<" is larger than "<<num2;
    }
    else
    {
        cout<<"Number "<<num2<<" is larger than "<<num1;
    }
    return 0;
}