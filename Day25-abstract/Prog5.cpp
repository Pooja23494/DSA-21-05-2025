// Visibility Modifier  Protected / Protected

#include<iostream>
using namespace std;

class Demo{
    protected:
        void print()
        {
            cout<<"Hello..";
        }
};
class Demo2 : protected Demo{
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