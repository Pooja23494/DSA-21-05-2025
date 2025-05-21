// Hierarchical Inheritance. Child1 and Child2 both inherit from Parent.

#include<iostream>
using namespace std;

class Parent{
    public:
        void show()
        {
            cout<<"This is parent class."<<endl;
        }
};
class Child1 : public Parent{
    public:
        void child1Method()
        {
            cout<<"Child1 class."<<endl;
        }
};
class Child2 : public Parent{
    public:
        void child2Method()
        {
            cout<<"Child2 class."<<endl;
        }
};
int main(){

    Child1 c1;
    Child2 c2;

    c1.show();
    c2.show();
    return 0;
}