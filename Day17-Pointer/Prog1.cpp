// Pointer 

#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int *ptr;

    ptr=&a;

    cout<<"Address of value: "<<ptr<<endl;
    cout<<"Value of address: "<<*ptr<<endl;
    
    return 0;
}