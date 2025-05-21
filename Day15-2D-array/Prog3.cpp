// Find min value in 2D matrix.

#include<iostream>
using namespace std;

int main(){

    int n,min;

    cout<<"Enter number for matrix: ";
    cin>>n;

    int a[20][20];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"Enter element for a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
    }

    min=a[0][0];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]<min)
            {
                min = a[i][j];
            }
        }
    }
    cout<<"Min value in matrix: "<<min;
    
    return 0;
}