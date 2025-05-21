// Simple Inheritance

#include<iostream>
using namespace std;

class Animal{
public:
    string a_name;
    void setAnimal()
    {
        cout<<"Enter Animal Name: ";
        cin>>this->a_name;
    }
    void getAnimal()
    {
        cout<<"Animal Name: "<<this->a_name<<endl;
    }
};

class Dog : public Animal{
public:
    string d_name,colour;
    int height;

    void setDog()
    {
        cout<<"Enter Dog Name: ";
        cin>>this->d_name;
        cout<<"Enter Dog Colour: ";
        cin>>this->colour;
        cout<<"Enter Dog Height: ";
        cin>>this->height;
    }

    void getDog()
    {
        cout<<endl;
        cout<<"Animal Name: "<<this->a_name<<endl;
        cout<<"Dog Name: "<<this->d_name<<endl;
        cout<<"Colour: "<<this->colour<<endl;
        cout<<"Height: "<<this->height<<endl;
    }
};
int main(){

    Dog d;
    d.setAnimal();
    d.setDog();
    d.getDog();
    return 0;
}