// Create a class Distance that stores distance in feet and inches. Include functions to input, add two distances, and display the result.

#include<iostream>
using namespace std;

class Distance
{
private:
    int feet, inches;
public:
    void setDistance()
    {
        cout<<"Enter Feet: ";
        cin>>this->feet;
        cout<<"Enter Inches: ";
        cin>>this->inches;
    }
    void getDistance()
    {
        cout<<"Distance is "<<this->feet<<" feet and "<<this->inches<<" inches"<<endl;
    }
    void addDistance(Distance d1, Distance d2)
    {
        feet=d1.feet+d2.feet;
        inches=d1.inches+d2.inches;
        feet=feet+(inches/12);
        inches=inches%12;
    }
};

int main(){

    Distance d1,d2,d3;

    d1.setDistance();
    d2.setDistance();
    d3.addDistance(d1,d2);
    d3.getDistance();

    return 0;
}