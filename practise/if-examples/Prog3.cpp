// Write a program to check whether a person is eligible to vote(age>=18).

#include<iostream>
using namespace std;

int main(){

    int age;

    cout<<"Enter your Age: ";
    cin>>age;

    if(age>=18)
    {
        cout<<"You are eligible to vote.";
    }
    else
    {
        cout<<"You are not eligible to vote.";
    }
    return 0;
}