// Menu driven program.

#include<iostream>
using namespace std;

int main(){

    int row,col,choice,index,sum;
    int a[20][20];

    cout<<"Enter row for matrix: ";
    cin>>row;

    cout<<"Enter col for matrix: ";
    cin>>col;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"Enter element for a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
    }

    do
    {
        cout<<endl;
        cout<<"-------------------------"<<endl;
        cout<<"Enter 1 for sum of row"<<endl;
        cout<<"Enter 2 for sum of column"<<endl;
        cout<<"Enter 3 for diagonal"<<endl;
        cout<<"Enter 0 exit"<<endl;
        cout<<"-------------------------"<<endl;
        cout<<"Enter Your Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                sum=0;
                cout<<"Enter index of row: ";
                cin>>index;
                for(int i=0;i<row;i++)
                {
                    for(int j=0;j<col;j++)
                    {
                        if(i==index)
                        {
                            sum += a[i][j];
                        }
                    }
                }
                cout<<"Sum of row for index "<<index<<" : "<<sum;
                break;
            case 2:
                sum=0;
                cout<<"Enter index of column: ";
                cin>>index;
                for(int i=0;i<row;i++)
                {
                    for(int j=0;j<col;j++)
                    {
                        if(j==index)
                        {
                            sum += a[i][j];
                        }
                    }
                }
                cout<<"Sum of column for index "<<index<<" : "<<sum;
                break;
            case 3:
                cout<<"Diagonal of matrix: "<<endl;
                for(int i=0;i<row;i++)
                {
                    for(int j=0;j<col;j++)
                    {
                        if(i==j)
                        {
                            cout<<a[i][j]<<" ";
                        }
                        else
                        {
                            cout<<"  ";
                        }
                    }
                    cout<<endl;
                }
                break;
            case 0:
                break;
            default:
                cout<<"Wrong Choice !";
                break;
        }
    } while (choice!=0);
    
    
    return 0;
}