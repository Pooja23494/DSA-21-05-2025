// Passing a value.

#include<iostream>
using namespace std;

void area(int s)
{
    cout<<"Area of square: "<<s*s;
}
int main(){

    int side;

    cout<<"Enter side: ";
    cin>>side;

    area(side);
    return 0;
} 