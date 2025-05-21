/* Determine the grade of a student:
. Above 90:A
. 80-90: B
. 70-80:C
. Below 70:D */ 

#include<iostream>
using namespace std;

int main(){

    double avg;

    cout<<"Enter your average: ";
    cin>>avg;

    if(avg>90)
    {
        cout<<"Grade A";
    }
    else if(avg>80 && avg<90)
    {
        cout<<"Grade B";
    }
    else if(avg>70 && avg<80)
    {
        cout<<"Grade C";
    }
    else{
        cout<<"Grade D";
    }
    return 0;
}

