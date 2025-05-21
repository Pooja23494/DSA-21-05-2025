// Multilevel Employee information

#include<iostream>
using namespace std;

class Company{
public:
    string c_name,branch;

    void setCompany()
    {
        cout<<"Enter Company Name: ";
        cin>>this->c_name;
        cout<<"Enter Branch Name: ";
        cin>>this->branch;
    }
};

class Manager : public Company{
public:
    string m_name;

    void setManager()
    {
        cout<<"Enter Manager Name: ";
        cin>>this->m_name;
    }
};

class Employee : public Manager{
public:
    string e_name,address;
    int e_id;

    void setEmployee()
    {
        cout<<"Enter Employee Id: ";
        cin>>this->e_id;
        cout<<"Enter Employee Name: ";
        cin>>this->e_name;
        cout<<"Enter Address: ";
        cin>>this->address;
    }

    void getEmployee()
    {
        cout<<endl;
        cout<<"Company Name: "<<this->c_name<<endl;
        cout<<"Branch: "<<this->branch<<endl;
        cout<<"Manager Name: "<<this->m_name<<endl;
        cout<<"Employee Id: "<<this->e_id<<endl;
        cout<<"Employee Name: "<<this->e_name<<endl;
        cout<<"Address: "<<this->address<<endl;
    }
};

int main(){

    Employee emp;

    emp.setCompany();
    emp.setManager();
    emp.setEmployee();
    emp.getEmployee();

    return 0;
}