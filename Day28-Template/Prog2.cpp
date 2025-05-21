// Class based template.

#include<iostream>
using namespace std;

template <typename T1, typename T2>
class Demo{
    private:
        T1 a;
        T2 b;
    public:
        void add(T1 a, T2 b)
        {
            cout<<"Sum of a and b: "<<a+b;
        }
};
int main(){

    Demo<int,float> d;
    d.add(5,3.2);
    return 0;
}