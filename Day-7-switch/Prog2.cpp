// Grade generator.
#include<iostream>
using namespace std;

int main(){

    double avg;
    char grade;

    cout<<"Enter your Percentage: ";
    cin>>avg;

    avg>=80
        ? grade = 'A'
        : avg>=70
            ? grade = 'B'
            : avg>=60
                ? grade = 'C'
                : avg>=50
                    ? grade = 'D'
                    : grade = 'F';

    switch(grade)
    {
        case 'A':
            cout<<"Excellent"<<endl;
            break;
        case 'B':
            cout<<"Good"<<endl;
            break;
        case 'C':
            cout<<"Average"<<endl;
            break;
        case 'D':
            cout<<"Poor"<<endl;
            break;
        default:
            cout<<"Fail"<<endl;
    }
    return 0;
}