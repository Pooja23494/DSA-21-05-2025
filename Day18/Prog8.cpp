// Passing a pointer.

#include<iostream>
using namespace std;

void area(int *s)
{
    cout<<"Area of square: "<<*s**s;
}
int main(){

    int side;
    int *p;

    cout<<"Enter side: ";
    cin>>side;

    p=&side;

    area(p);
    return 0;
} 