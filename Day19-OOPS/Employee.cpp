// Constructor

#include<iostream>
using namespace std;

class Employee
{
    int empid;
    string empname;

    public:
    Employee(int empid,string empname){
        this->empid=empid;
        this->empname=empname;
    }
    void getEmployee()
    {
        cout<<"Employee Id is: "<<this->empid<<endl;
        cout<<"Employee Name is: "<<this->empname<<endl;
    }
};
int main(){
    Employee objemp(7,"Pooja");
    objemp.getEmployee();

    Employee objemp1(10,"Diya");
    objemp1.getEmployee();
    return 0;
}