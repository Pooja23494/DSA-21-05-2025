// Print the month name for a given number(1-12).

#include<iostream>
using namespace std;

int main(){

    int num;

    cout<<"Enter number between 1-12: ";
    cin>>num;

    switch (num)
    {
    case 1:
        cout<<"January";
        break;

    case 2:
        cout<<"February";
        break;
    
    case 3:
        cout<<"March";
        break;

    case 4:
        cout<<"April";
        break;

    case 5:
        cout<<"May";
        break;

    case 6:
        cout<<"June";
        break;

    case 7:
        cout<<"July";
        break;

    case 8:
        cout<<"August";
        break;

    case 9:
        cout<<"September";
        break;

    case 10:
        cout<<"October";
        break;

    case 11:
        cout<<"November";
        break;
    
    default:
        cout<<"December";
        break;
    }
    return 0;
}