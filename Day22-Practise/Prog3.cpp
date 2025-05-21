// Design a class Rectangle with data members length and width. Include member functions to set dimensions and calculate area and perimeter.

#include<iostream>
using namespace std;

class Rectangle{
    private:
        float l,w;
    public:
        Rectangle(float l, float w)
        {
            this->l=l;
            this->w=w;
        }
        void getArea()
        {   
            cout<<endl;
            cout<<"Area of Rectangle: "<<this->l*this->w<<endl;
        }
        void getPerimeter()
        {
            cout<<"Perimeter of Rectangle: "<<2*(this->l+this->w)<<endl;
        }
};
int main(){

    float l,w;

    cout<<"Enter length of rectangle: ";
    cin>>l;
    cout<<"Enter width of rectangle: ";
    cin>>w;

    Rectangle rect(l,w);
    rect.getArea();
    rect.getPerimeter();

    return 0;
}