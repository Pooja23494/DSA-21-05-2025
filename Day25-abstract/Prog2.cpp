// Visibility Modifier Public / Public

#include<iostream>
using namespace std;

class Demo{
    public:
        void print()
        {
            cout<<"Hello..";
        }
};
class Demo2 : public Demo{};

int main(){

    Demo2 d;
    d.print();
    return 0;
}