// Default Constructor and Destructor

#include<iostream>
using namespace std;

class Student
{
public:
    Student()
    {
        cout<<"Constructor.."<<endl;
    }
    ~Student()
    {
        cout<<"Destructor.."<<endl;
    }
};
int main()
{
    Student std;
    return 0;
}