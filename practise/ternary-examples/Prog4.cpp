// Check if a student has passes or failed using ternary.

#include<iostream>
using namespace std;

int main(){

    int mark;

    cout<<"Enter Your mark: ";
    cin>>mark;

    mark>35
        ? cout<<"You are pass."
        : cout<<"You are fail.";
        
    return 0;
}