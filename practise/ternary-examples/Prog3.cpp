// Print "Even" or "Odd" using ternary operator.

#include<iostream>
using namespace std;

int main(){

    int num;

    cout<<"Enter Number: ";
    cin>>num;

    num%2==0
        ? cout<<"Number is Even."
        : cout<<"number is Odd.";
        
    return 0;
}