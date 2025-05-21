// Marksheet
#include<iostream>
using namespace std;

int main()
{

    int rollno,science,maths,english,total;
    string studentname;
    double avg;
    char grade;

    cout<<"Enter Roll No: ";
    cin>>rollno;

    cout<<"Enter Student Name: ";
    cin>>studentname;

    cout<<"Enter Science Marks: ";
    cin>>science;

    cout<<"Enter Maths Marks: ";
    cin>>maths;

    cout<<"Enter English Marks: ";
    cin>>english;

    total=science+maths+english;
    avg=total/3;

    cout<<endl;
    cout<<"*********Marksheet*********"<<endl;
    cout<<"Roll No: "<<rollno<<endl;
    cout<<"Student Name: "<<studentname<<endl;
    cout<<"Science Marks: "<<science<<endl;
    cout<<"Maths Marks: "<<maths<<endl;
    cout<<"English Marks: "<<english<<endl;
    cout<<"Total Marks: "<<total<<endl;
    cout<<"Average: "<<avg<<" %"<<endl;

    if(science>=0 && science<=100 && maths>=0 && maths<=100 && english>=0 && english<=100)
    {
        if(science>=35 && maths>=35 && english>=35)
        {
            cout<<"Pass"<<endl;
            if(avg>=80)
            {
                grade = 'A';
            }
            else if(avg>=60)
            {
                grade = 'B';
            }
            else if(avg>=50)
            {
                grade = 'C';
            }
            else
            {
                grade = 'D';

            }
        }
        else
        {
            grade = 'F';

        }
    }
    else{
        cout<<"Enter Valid Marks. Marks should be between 0-100."<<endl;
    }

    switch(grade)
    {
        case 'A':
            cout<<"Your grade is A.";
            break;
        case 'B':
            cout<<"Your grade is B.";
            break;
        case 'C':
            cout<<"Your grade is C.";
            break;
        case 'D':
            cout<<"Your grade is D.";
            break;
        default:
            cout<<"You are fail.";
            break;
    }

    return 0;
}