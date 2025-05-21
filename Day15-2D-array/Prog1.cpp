// Print matrix.

// Step 1: Start
// Step 2: Initialize variable
// Step 3: Declare array
// Step 4: Initialize i by 0
// Step 5: Repeat steps 6-12 untill i less than n
// Step 6: Initialize j by 0
// Step 7: Repeat steps 8-10 untill j less than n
// Step 8: Initialize array
// Step 9: Increment j by 1
// Step 10: Go to step 7
// Step 11: Increment i by 1
// Step 12: Go to step 5
// Step 13: Initialize i by 0
// Step 14: Repeat steps 15-21 untill i less than n
// Step 15: Initialize j by 0
// Step 16: Repeat steps 17-19 untill j less than n
// Step 17: Print array
// Step 18: Increment j by 1
// Step 19: Go to step 16
// Step 20: Increment i by 1
// Step 21: Go to step 14
// Step 22: End

#include<iostream>
using namespace std;

int main(){

    int n;

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
    cout<<"----------------"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"----------------"<<endl;
    return 0;
}