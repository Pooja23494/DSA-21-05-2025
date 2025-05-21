// Determine if a year is a leap year.

#include<iostream>
using namespace std;

int main(){

    int year;

    cout<<"Enter Year: ";
    cin>>year;

    if(year%4==0)
    {
        cout<<"Year is a Leap year.";
    }
    else
    {
        cout<<"Year is not a Leap year.";
    }
    return 0;
}