// DMA with OOPS

#include<iostream>
using namespace std;

class Demo{
    public:
        int *arr,size;
    public:
        Demo(int size){
            this->size=size;
            arr = new int[size];
            cout<<"Memory allocated."<<endl;
        }
        ~Demo(){
            delete[] arr;
            cout<<"Memory Deallocated."<<endl;
        }

};
int main(){

    Demo obj(5);
    return 0;
}