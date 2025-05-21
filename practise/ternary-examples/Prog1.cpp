// Use a ternary to check if a number is positive or negative.

#include<iostream>
using namespace std;

int main(){

    int num;

    cout<<"Enter Number: ";
    cin>>num;

    num>0
        ? cout<<"Number is Positive."
        : cout<<"number is Negative.";
        
    return 0;
}