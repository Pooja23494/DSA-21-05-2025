// Abstract class

#include<iostream>
using namespace std;

// Abstract class or interface
class Manager{
    public:
        // Pure virtual function
        virtual void getManager() = 0;
        virtual void getEmployee() = 0;
};
class Employee : public Manager{
    public:
        void getManager()
        {
            cout<<"Manager Data.."<<endl;
        }
        void getEmployee()
        {
            cout<<"Employee Data.."<<endl;
        }
        void getData()
        {
            cout<<"Hello.."<<endl;
        }
};

int main(){
    
    Employee emp;
    emp.getManager();
    emp.getEmployee();
    emp.getData();
    return 0;
}