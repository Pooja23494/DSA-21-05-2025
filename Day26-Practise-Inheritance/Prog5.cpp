// Multilple Inheritance. Class C inherits from both A and B.

#include<iostream>
using namespace std;

class A{
    public:
        void showA()
        {
            cout<<"Class A"<<endl;
        }
};
class B{
    public:
        void showB()
        {
            cout<<"Class B"<<endl;
        }
};
class C : public A, public B{
    public:
        void showC()
        {
            cout<<"Class C"<<endl;
        }
};
int main(){

    C obj;
    obj.showA();
    obj.showB();
    obj.showC();

    return 0;
}