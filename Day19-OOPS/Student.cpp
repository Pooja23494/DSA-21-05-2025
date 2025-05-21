// OOPS

#include<iostream>
using namespace std;

class Student
{
    int rollNo;
    string name;

    public:
    void getStudent(int rollNo,string name)
    {
        cout<<"Roll No is: "<<rollNo<<endl;
        cout<<"Student Name is: "<<name<<endl;
    }
};

int main(){

    Student objS;

    objS.getStudent(7,"Pooja");
    return 0;
}