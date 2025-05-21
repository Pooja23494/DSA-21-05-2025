// Check if a number is even or odd.

#include<iostream>
using namespace std;

int main(){

    int num;

    cout<<"Enter Number: ";
    cin>>num;

    if(num%2==0)
    {
        cout<<"Number is even.";
    }
    else
    {
        cout<<"Number is odd.";
    }

    return 0;
}