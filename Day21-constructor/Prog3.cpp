// Paramiterized Constructor and Destructor

#include<iostream>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;
public:
    void setStudent();
    void getStudent();
    
};
void Student::setStudent()
{
    cout<<"Enter Roll No: ";
    cin>>this->rollNo;
    cout<<"Enter Name: ";
    cin>>this->name;
}
void Student::getStudent()
{
    cout<<"Roll No: "<<this->rollNo<<endl;
    cout<<"Name: "<<this->name<<endl;
}
int main()
{
    Student std;
    std.setStudent();
    std.getStudent();
    return 0;
}