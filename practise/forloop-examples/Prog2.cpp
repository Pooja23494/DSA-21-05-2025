// Print table of any number entered by the user.

#include<iostream>
using namespace std;

int main(){

    int num;

    cout<<"Enter Number: ";
    cin>>num;

    for(int i=1;i<=10;i++)
    {
        cout<<num<<" * "<<i<<" = "<<num*i<<endl;

    }
    return 0;
}