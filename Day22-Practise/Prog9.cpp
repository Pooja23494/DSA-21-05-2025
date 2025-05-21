// Create a class Calculator with two operands and methods to perform addition, subtraction, multiplication, and division.

#include<iostream>
using namespace std;

class Calculator
{
private:
    int a,b;
public:
    void setCalculator()
    {
        cout<<"Enter value of A: ";
        cin>>this->a;
        cout<<"Enter value of B: ";
        cin>>this->b;
    }
    void getAddition()
    {
        cout<<"Addition of two operands "<<this->a<<" and "<<this->b<<" is : "<<this->a+this->b<<endl;
    }
    void getSubtraction()
    {
        cout<<"Subtraction of two operands "<<this->a<<" and "<<this->b<<" is : "<<this->a-this->b<<endl;
    }
    void getMultiplication()
    {
        cout<<"Multiplication of two operands "<<this->a<<" and "<<this->b<<" is : "<<this->a*this->b<<endl;
    }
    void getDivision()
    {
        cout<<"Division of two operands "<<this->a<<" and "<<this->b<<" is : "<<this->a/this->b<<endl;
    }
};
int main(){

    int choice;
    Calculator c;

    do
    {
        cout<<endl;
        cout<<"Enter 1 for Addition"<<endl;
        cout<<"Enter 2 for Subtraction"<<endl;
        cout<<"Enter 3 for Multiplication"<<endl;
        cout<<"Enter 4 for Division"<<endl;
        cout<<"Enter 0 for Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                c.setCalculator();
                c.getAddition();
                break;

            case 2:
                c.setCalculator();
                c.getSubtraction();
                break;

            case 3:
                c.setCalculator();
                c.getMultiplication();
                break;

            case 4:
                c.setCalculator();
                c.getDivision();
                break;

            case 0:
                cout<<"Exit.";
                break;

            default:
                cout<<"Wrong choice!";
                break;
        }
    }while(choice!=0);

    return 0;
}