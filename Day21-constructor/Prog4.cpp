// Static member

#include<iostream>
using namespace std;

class Employee
{
    public:
        static int e_id;
        static void getEmployee()
        {
            cout<<"Hello"<<endl;
        }
};
int Employee::e_id=12345;

int main(){

    Employee::getEmployee();
    cout<<"Employee Id: "<<Employee::e_id;
    return 0;
}