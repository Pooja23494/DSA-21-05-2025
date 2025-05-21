// Write a class Temperature that stores Celsius temperature. Include a method to convert it to Fahrenheit.

#include<iostream>
using namespace std;

class Temperature
{
private:
    double C;
public:
    void setTemperature()
    {
        cout<<"Enter Temperature in Celcius: ";
        cin>>this->C;
    }
    void getTemperature()
    {
        cout<<"Temperature in Celsius: "<<this->C<<" C"<<endl;;
    }
    void convertFahrenheit()
    {
        cout<<"Temperature in Fahrenheit: "<<(this->C*9.0/5.0)+32.0<<" F"<<endl;
    }
};

int main(){

    Temperature t;
    t.setTemperature();
    t.getTemperature();
    t.convertFahrenheit();
    
    return 0;
}