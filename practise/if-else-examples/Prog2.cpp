// Check if a student has passed or failed based on marks(pass mark is 40).

#include<iostream>
using namespace std;

int main(){

    int mark;

    cout<<"Enter your mark: ";
    cin>>mark;

    if(mark>=40)
    {
        cout<<"You are passed the exam.";
    }
    else
    {
        cout<<"You are Fail.";
    }
    return 0;
}