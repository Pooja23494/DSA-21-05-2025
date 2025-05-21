// Take a number (1-7) and print the day of the week.

#include<iostream>
using namespace std;

int main(){

    int num;

    cout<<"Enter number between 1-7: ";
    cin>>num;

    switch (num)
    {
    case 1:
        cout<<"Today is Monday";
        break;

    case 2:
        cout<<"Today is Tuesday";
        break;
    case 3:

        cout<<"Today is Wednesday";
        break;
    case 4:
    
        cout<<"Today is Thursday";
        break;

    case 5:
        cout<<"Today is Friday";
        break;

    case 6:
        cout<<"Today is Saturday";
        break;
    
    default:
        cout<<"Today is Sunday";
        break;
    }
    return 0;
}