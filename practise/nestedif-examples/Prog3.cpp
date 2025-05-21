// Check if a person is eligible to vote, and if eligible, check whether they are eligible for contesting an election(age>=25).

#include<iostream>
using namespace std;

int main(){

    int age;

    cout<<"Enter Your Age: ";
    cin>>age;

    if(age>18)
    {
        cout<<"You are eligible for vote."<<endl;
        if(age>=25)
        {
            cout<<"You are also eligible for contesting an election.";
        }
        else
        {
            cout<<"But, you are not eligible for contesting an election.";
        }
    }
    else
    {
        cout<<"You are not eligible for vote.";
    }
    return 0;
}
