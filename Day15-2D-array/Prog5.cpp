// Find min value in 1D matrix.

#include<iostream>
using namespace std;

int main(){

    int n,min;

    cout<<"Enter number for array: ";
    cin>>n;

    int a[20];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter element for a["<<i<<"]: ";
        cin>>a[i];
    }

    min=a[0];

    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min = a[i];
        }
        
    }
    cout<<"Max value in array: "<<min;
    
    return 0;
}