// Array of object

#include<iostream>
using namespace std;

class Student{

    int rollNo,mark;
    string name;

    public:
    void setStudent(int rollNo, string name, int mark)
    {
        this->rollNo=rollNo;
        this->name=name;
        this->mark=mark;
    }
    void getStudent()
    {
        cout<<"Roll No is: "<<rollNo<<endl;
        cout<<"Name is: "<<name<<endl;
        cout<<"Mark is: "<<mark<<endl;
    }

};

int main(){

    int n,rollNo,mark,choice,index;
    string name;

    cout<<"Enter size of student data: ";
    cin>>n;
        
    Student s[n];

    do{
        cout<<endl;
        cout<<"Press 1 for Enter Student Data"<<endl;
        cout<<"Press 2 for View Student Data"<<endl;
        cout<<"Press 3 for Update Data"<<endl;
        cout<<"Press 4 for Delete Data"<<endl;
        cout<<"Press 0 for Exit"<<endl;
        cout<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                for(int i=0;i<n;i++)
                {
                    cout<<endl;
                    cout<<"Enter student data at index ["<<i<<"]"<<endl;
                    cout<<"Enter Roll No: ";
                    cin>>rollNo;
                    cout<<"Enter name: ";
                    cin>>name;
                    cout<<"Enter mark: ";
                    cin>>mark;
        
                    s[i].setStudent(rollNo,name,mark);
                }
                break;
            case 2:
                for(int i=0;i<n;i++)
                {
                    cout<<endl;
                    cout<<"Student data at index ["<<i<<"]"<<endl;
                    s[i].getStudent();
                }
                cout<<endl;
                break;
            case 3:
                cout<<"Enter index for update data: ";
                cin>>index;

                for(int i=0;i<n;i++)
                {
                    if(i==index)
                    {
                        cout<<"Enter student data at index ["<<i<<"]"<<endl;
                        cout<<"Enter Roll No: ";
                        cin>>rollNo;
                        cout<<"Enter name: ";
                        cin>>name;
                        cout<<"Enter mark: ";
                        cin>>mark;
        
                        s[i].setStudent(rollNo,name,mark);
                    }
                }
                break;
            case 4:
                cout<<"Enter index for delete data: ";
                cin>>index;
                for (int i = index; i <= n - 1; i++)
                {
                    s[i] = s[i+1];
                }
                n--;
                break;
            case 0:
                cout<<"Exit.";
                break;
            default:
                cout<<"Wrong choice!";
                break;
        }

    }while(choice!=0);

    return 0;
}