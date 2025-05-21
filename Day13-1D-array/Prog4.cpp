// iteration through for each loop.

// Step 1: Start
// Step 2: Declare array
// Step 3: Initialize i by 0
// Step 4: Repeat steps 5-7 untill i less than 5
// Step 5: Initialize array
// Step 6: Increment i by 1
// Step 7: Go to step 4
// Step 8: Repeat step 9-10, untill initialize array in e
// Step 9: Print e
// Step 10: Go to step 8
// Step 11: End

#include<iostream>
using namespace std;

int main(){

    int a[5];

    for(int i=0;i<5;i++)
    {
        cout<<"Enter element: ";
        cin>>a[i];
    }
    cout<<endl;
    cout<<"----------------"<<endl;
    cout<<"Array element: ";

    for(int e:a)
    {
        cout<<e<<",";
    }
    return 0;
}