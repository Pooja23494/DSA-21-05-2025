// Area of Circle, Rectangle.
#include<iostream>
using namespace std;

int main(){

    float r,PIE,l,b,area,rectarea;
    PIE=3.14;

    cout<<"Enter radius of circle:";
    cin>>r;

    area=PIE*r*r;

    cout<<"Enter value of Length:";
    cin>>l;

    cout<<"Enter value of Breath:";
    cin>>b;

    rectarea=l*b;

    cout<<"***************"<<endl;
    cout<<"Area of Circle:"<<area<<endl;
    cout<<"Area of Rectangle:"<<rectarea<<endl;
    cout<<"***************"<<endl;

    return 0;
}