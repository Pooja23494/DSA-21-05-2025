// Method overriding polymorphism

#include<iostream>
using namespace std;

class Manager{
    public:
        void printData()
        {
            cout<<"Manager Data.";
        }
};
class Employee : public Manager{
    public:
    void printData()
    {
        cout<<"Employee Data.";
    }
};
int main(){
    
    Employee emp;
    emp.printData();
    return 0;
}