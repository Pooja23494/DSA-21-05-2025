// Print which value is max from A, B, C.
#include<iostream>
using namespace std;

int main(){

    int a,b,c;

    cout<<"Enter value of A:";
    cin>>a;

    cout<<"Enter value of B:";
    cin>>b;

    cout<<"Enter value of C:";
    cin>>c;

    if(a>=b)
    {
        if(a>=c)
        {
            cout<<"A is max.";
        }
        else
        {
            cout<<"C is max.";
        }
    }
    else
    {
        if(b>=c)
        {
            cout<<"B is max.";
        }
        else
        {
            cout<<"C is max.";
        }
    }

    return 0;
}