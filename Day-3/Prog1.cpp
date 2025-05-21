#include<iostream>
using namespace std;

int main(){

    string studentname;
    double rollno,maths,science,history,english,arts,total,percentage;

    cout<<"Enter Student Roll Number:";
    cin>>rollno;
    
    cout<<"Enter Student Name:";
    cin>>studentname;

    cout<<"Enter Maths Marks:";
    cin>>maths;

    cout<<"Enter Science Marks:";
    cin>>science;

    cout<<"Enter History Marks:";
    cin>>history;

    cout<<"Enter English Marks:";
    cin>>english;

    cout<<"Enter Arts Marks:";
    cin>>arts;

    total=maths+science+history+english+arts;
    percentage=total/5;

    cout<<"***************"<<endl;
    cout<<"Roll No:"<<rollno<<endl;
    cout<<"Student Name:"<<studentname<<endl;
    cout<<"Total Marks:"<<total<<endl;
    cout<<"Percentage:"<<percentage<<endl;
    cout<<"***************";

    return 0;
}