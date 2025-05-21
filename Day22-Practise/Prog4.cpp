// Build a class Student that holds roll number, name, and marks for 3 subjects. Add methods to compute total, average, and display the result.

#include<iostream>
using namespace std;

class Student
{
    private:
        int rollNo,science,maths,english;
        string name;
    public:
        Student(int rollNo, string name, int science, int maths, int english)
        {
            this->rollNo=rollNo;
            this->name=name;
            this->science=science;
            this->maths=maths;
            this->english=english;
        }
        void getTotal()
        {
            cout<<"Total Marks: "<<this->science+this->maths+this->english<<endl;
        }
        void getAverage()
        {
            cout<<"Average: "<<(this->science+this->maths+this->english)/3<<endl;
        }
        void getResult()
        {
            cout<<endl;
            cout<<"Student Roll Number: "<<this->rollNo<<endl;
            cout<<"Student Name: "<<this->name<<endl;
            cout<<"Science Mark: "<<this->science<<endl;
            cout<<"Maths Mark: "<<this->maths<<endl;
            cout<<"English Mark: "<<this->english<<endl;
        }
};
int main(){

    int rollNo,science,maths,english;
    string name;

    cout<<"Enter Student Roll Number: ";
    cin>>rollNo;
    cout<<"Enter Student Name: ";
    cin>>name;
    cout<<"Enter Science Mark: ";
    cin>>science;
    cout<<"Enter Maths Mark: ";
    cin>>maths;
    cout<<"Enter English Mark: ";
    cin>>english;

    Student std(rollNo, name, science, maths, english);
    std.getResult();
    std.getTotal();
    std.getAverage();
    return 0;
}