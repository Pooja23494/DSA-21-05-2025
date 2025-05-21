// Find max value in 1D matrix.

#include<iostream>
using namespace std;

int main(){

    int n,max;

    cout<<"Enter number for array: ";
    cin>>n;

    int a[20];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter element for a["<<i<<"]: ";
        cin>>a[i];
    }

    max=a[0];

    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
        
    }
    cout<<"Max value in array: "<<max;
    
    return 0;
}