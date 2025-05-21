// Visibility Modifier Public / Private

#include<iostream>
using namespace std;

class Demo{
    public:
        void print()
        {
            cout<<"Hello..";
        }
};
class Demo2 : private Demo{
    public:
        void getData()
        {
            print();
        }
};

int main(){

    Demo2 d;
    d.getData();
    return 0;
}