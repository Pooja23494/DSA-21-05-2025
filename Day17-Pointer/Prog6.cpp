// Area of square using pointer.

#include<iostream>
using namespace std;

int main()
{
    int s,area;
    int *ptrS;

    cout<<"Enter side of square: ";
    cin>>s;

    ptrS=&s;

    area=(*ptrS)*(*ptrS);

    cout<<"Area of square: "<<area<<endl;
    return 0;
}