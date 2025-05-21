// Count the digits in a number.

#include<iostream>
using namespace std;

int main(){

    int n,count=0;

    cout<<"Enter Number: ";
    cin>>n;

    while(n>0)
    {
        count++;
        n=n/10;
    }
    cout<<"Digits in a number is: "<<count;
    return 0;
}
