// Sum of 2 matrix.

#include<iostream>
using namespace std;

int main(){

    int row,col;
    int a[20][20],b[20][20],c[20][20];

    cout<<"Enter row for matrix: ";
    cin>>row;

    cout<<"Enter col for matrix: ";
    cin>>col;

    cout<<"Matrix A"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"Enter element for a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
    }
    cout<<"Matrix B"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"Enter element for b["<<i<<"]["<<j<<"]: ";
            cin>>b[i][j];
        }
    }
    
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}