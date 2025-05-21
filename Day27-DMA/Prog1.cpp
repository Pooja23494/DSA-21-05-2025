// DMA with Procedure Way

#include<iostream>
using namespace std;

int main(){

    int *arr, size;

    cout<<"Enter size of array: ";
    cin>>size;

    arr = new int[size];

    if(arr == NULL)
    {
        cout<<"Memory Not allocated."<<endl;
        return 1;
    }
    else
    {
        cout<<"Memory allocated."<<endl;
    }
    delete[] arr;
    return 0;
}