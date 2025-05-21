// Paramiterized Constructor and Destructor

#include<iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
public:
    Student(int rollNo, string name)
    {
        this->rollNo=rollNo;
        this->name=name;
    }
    void getStudent()
    {
        cout<<"Roll No: "<<this->rollNo<<endl;
        cout<<"Name: "<<this->name<<endl;
    }
    ~Student()
    {
        cout<<"Destructor.."<<endl;
    }
};
int main()
{
    Student std(7,"Pooja");
    std.getStudent();
    return 0;
}