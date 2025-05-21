#include<iostream>
using namespace std;

int main(){

    double avg;

    cout<<"Enter Your Percentage:";
    cin>>avg;

    if(avg<=100 && avg>=35)
    {
        if(avg>=80)
        {
            cout<<"A Grade";
        }
        else if (avg>=60)
        {
            cout<<"B Grade";
        }
        else if(avg>=50)
        {
            cout<<"C Grade";
        }
        else
        {
            cout<<"Pass Class";
        }
    }
    else if(avg<35)
    {
        cout<<"Fail";
    }
    else{
        cout<<"Wrong Input value should be less then 100";
    }
    return 0;
}