// Find the largest among three numbers using nested if.

#include<iostream>
using namespace std;

int main(){

    int num1,num2,num3;

    cout<<"Enter Number 1: ";
    cin>>num1;
    cout<<"Enter Number 2: ";
    cin>>num2;
    cout<<"Enter Number 3: ";
    cin>>num3;

    if(num1>num2)
    {
        if(num1>num3)
        {
            cout<<"Number 1 ("<<num1<<") is largest among another 2 numbers.";
        }
        else
        {
            cout<<"Number 3 ("<<num3<<") is largest among another 2 numbers.";
        }
    }
    else
    {
        if(num2>num3)
        {
            cout<<"Number 2 ("<<num2<<") is largest among another 2 numbers.";
        }
        else
        {
            cout<<"Number 3 ("<<num3<<") is largest among another 2 numbers.";
        }
    }

    return 0;
}