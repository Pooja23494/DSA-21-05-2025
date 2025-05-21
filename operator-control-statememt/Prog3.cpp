#include<iostream>
using namespace std;

int main(){

    int a,b;

    cout<<"Enter value of A:";
    cin>>a;

    cout<<"Enter value of B:";
    cin>>b;

    if(a>b)
    {
        cout<<"A greater than B";
    }
    else if(a<b)
    {
        cout<<"B greater than A";
    }
    else
    {
        cout<<"A and B are equal";
    }
    
    return 0;
}