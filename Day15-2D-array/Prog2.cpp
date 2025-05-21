// Find max value in 2D matrix.

#include<iostream>
using namespace std;

int main(){

    int n,max;

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

    max=a[0][0];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]>max)
            {
                max = a[i][j];
            }
        }
    }
    cout<<"Max value in matrix: "<<max;
    
    return 0;
}