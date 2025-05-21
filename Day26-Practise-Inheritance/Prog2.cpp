// Single Inheritance. Student class inherits Person class. Student accesses inherited data member name.

#include<iostream>
#include <string>
using namespace std;

class Person{
    public:
        string name;
        void inputName()
        {
            cout<<"Enter Name: ";
            getline(cin,name);
        }
};
class Student : public Person{
    public:
        void display()
        {
            cout<<"Student Name: "<<name<<endl;
        }
};
int main(){

    Student s;
    s.inputName();
    s.display();
    return 0;
}