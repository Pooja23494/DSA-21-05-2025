// Print user information.
#include<iostream>
using namespace std;

int main(){

    string username,email,address;
    int age;
    double contactno;

    cout<<"Enter User Name:";
    cin>>username;

    cout<<"Enter User's age:";
    cin>>age;

    cout<<"Enter Contact Number:";
    cin>>contactno;

    cout<<"Enter Email Address:";
    cin>>email;

    cout<<"Enter Address:";
    cin>>address;

    cout<<"*****************"<<endl;
    cout<<"User Name:"<<username<<endl;
    cout<<"Age:"<<age<<endl;
    cout<<"Contact Number:"<<contactno<<endl;
    cout<<"Email Adress:"<<email<<endl;
    cout<<"Address:"<<address<<endl;
    cout<<"*****************";

    return 0;
}