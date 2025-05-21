// Hybrid Inheritance. Student inherits from College(which inherits University) and Department.

#include<iostream>
using namespace std;

class University{
    public:
        void displayUniversity()
        {
            cout<<"University Class"<<endl;
        }
};
class College: public University{
    public:
        void displayCollege()
        {
            cout<<"College Class"<<endl;
        }
};
class Department{
    public:
        void displayDepartment()
        {
            cout<<"Department Class"<<endl;
        }
};
class Student: public College, public Department{
    public:
        void displayStudent()
        {
            cout<<"Student Class"<<endl;
        }
};
int main(){

    Student s;
    s.displayUniversity();
    s.displayCollege();
    s.displayDepartment();
    s.displayStudent();
    
    return 0;
}