// Area of circle using pointer.

#include<iostream>
using namespace std;

int main()
{
    float pi=3.14,r,area;
    float *ptrPI,*ptrR;

    cout<<"Enter radius of circle: ";
    cin>>r;

    ptrPI=&pi;
    ptrR=&r;

    area=(*ptrPI)*(*ptrR)*(*ptrR);

    cout<<"Area of circle: "<<area<<endl;
    return 0;
}