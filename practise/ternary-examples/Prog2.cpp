// Find the largest of two numbers using ternary.

#include<iostream>
using namespace std;

int main(){

    int num1,num2;

    cout<<"Enter Number 1: ";
    cin>>num1;
    cout<<"Enter Number 2: ";
    cin>>num2;

    num1>num2
        ? cout<<"Number 1 is larger than Number 2."
        : cout<<"Number 2 is larger than Number 1.";

    return 0;
}