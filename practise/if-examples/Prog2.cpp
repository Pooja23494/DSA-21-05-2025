// Write a program to check wheather a student has passed an exam(pass mark is 35).

#include<iostream>
using namespace std;

int main(){

    int mark;
    

    cout<<"Enter Mark: ";
    cin>>mark;

    if(mark>=35)
    {
        cout<<"Student is Pass.";
    }
    else
    {
        cout<<"Student is Fail.";
    }
    return 0;
}