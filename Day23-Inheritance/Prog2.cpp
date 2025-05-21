// Multilevel Student information

#include<iostream>
using namespace std;

class Institute{
public:
    string i_name,branch;

    void setInstitute()
    {
        cout<<"Enter Institute Name: ";
        cin>>this->i_name;
        cout<<"Enter Branch Name: ";
        cin>>this->branch;
    }
};

class Faculty : public Institute{
public:
    string f_name,field;

    void setFaculty()
    {
        cout<<"Enter Faculty Name: ";
        cin>>this->f_name;
        cout<<"Enter Field: ";
        cin>>this->field;
    }
};

class Student : public Faculty{
public:
    string s_name,address;
    int s_id;

    void setStudent()
    {
        cout<<"Enter Student Id: ";
        cin>>this->s_id;
        cout<<"Enter Student Name: ";
        cin>>this->s_name;
        cout<<"Enter Address: ";
        cin>>this->address;
    }

    void getStudent()
    {
        cout<<endl;
        cout<<"Institute Name: "<<this->i_name<<endl;
        cout<<"Branch: "<<this->branch<<endl;
        cout<<"Faculty Name: "<<this->f_name<<endl;
        cout<<"Field: "<<this->field<<endl;
        cout<<"Student Id: "<<this->s_id<<endl;
        cout<<"Student Name: "<<this->s_name<<endl;
        cout<<"Address: "<<this->address<<endl;
    }
};

int main(){

    Student s;

    s.setInstitute();
    s.setFaculty();
    s.setStudent();
    s.getStudent();

    return 0;
}