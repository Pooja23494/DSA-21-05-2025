// Calculator: take two numbers and an operator(+,-,*,/)using switch.

#include<iostream>
using namespace std;

int main(){

    int num1,num2,total;
    char ope;

    cout<<"Enter Number 1: ";
    cin>>num1;
    cout<<"Enter Number 2: ";
    cin>>num2;
    cout<<"Enter which operation you want to perform (+,-,*,/): ";
    cin>>ope;

    switch (ope)
    {
    case '+':
        total=num1+num2;
        cout<<"Addition of two numbers: "<<total;
        break;

    case '-':
        total=num1-num2;
        cout<<"Substraction of two numbers: "<<total;
        break;
    
    case '*':
        total=num1*num2;
        cout<<"Multiplication of two numbers: "<<total;
        break;
    
    default:
        total=num1/num2;
        cout<<"Division of two numbers: "<<total;
        break;
    }

    return 0;
}