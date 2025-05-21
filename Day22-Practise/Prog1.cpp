// Create a class Employee with members:id, name, salary. include functions to input and display employee details.

#include<iostream>
using namespace std;

class Employee
{
private:
    int e_id;
    string name;
    double salary;
public:
    void setEmployee(int e_id, string name, double salary)
    {
        this->e_id=e_id;
        this->name=name;
        this->salary=salary;
    }
    void getEmployee()
    {
        cout<<endl;
        cout<<"Employee Id: "<<this->e_id<<endl;
        cout<<"Employee Name: "<<this->name<<endl;
        cout<<"Salary: "<<this->salary<<endl;
    }
};
int main(){

    Employee emp;
    int e_id;
    string name;
    double salary;

    cout<<"Enter Employee Id: ";
    cin>>e_id;
    cout<<"Enter Employee Name: ";
    cin>>name;
    cout<<"Enter Salary: ";
    cin>>salary;

    emp.setEmployee(e_id,name,salary);
    emp.getEmployee();

    return 0;
}