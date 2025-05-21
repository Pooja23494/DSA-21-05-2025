// Method Overloading polymorphism

#include<iostream>
using namespace std;

class Operation{
    public:
        float a=15,b=2;
        void operation(int a, int b)
        {
            cout<<"Sum of a and b: "<<a+b<<endl;
        }
        void operation(float a,float b)
        {
            cout<<"Subtraction of a and b: "<<a-b<<endl; 
        }
        double operation(double a,double b)
        {
            cout<<"Multiplication of a and b: "<<a*b<<endl;
        }
        float operation()
        {
            cout<<"Division of a and b: "<<a/b<<endl;
        }
};
int main(){

    Operation o;
    float a=14,b=3.5;
    
    o.operation(10,20);
    o.operation(a,b);
    o.operation(30.5,0.5);
    o.operation();
    return 0;
}