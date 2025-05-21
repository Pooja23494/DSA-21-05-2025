// Insertion, iteration, Updation in array

// Step 1: Start
// Step 2: Initialize variables
// Step 3: Initialize i by 0
// Step 4: Repeat steps 5-7 untill i less than 5
// Step 5: Initalize array
// Step 6: Increment i by 1
// Step 7: Go to step 4
// Step 8: Repeat steps 9-11 untill i less than 5
// Step 9: Print array
// Step 10: Increment i by 1
// Step 11: Go to step 8
// Step 12: Initialize a[index]=element
// Step 13: Repeat steps 14-16 untill i less than 5
// Step 14: Print array
// Step 15: Increment i by 1
// Step 16: Go to step 13
// Step 17: End

#include<iostream>
using namespace std;

int main(){

    int a[5],index,element;

    for(int i=0;i<5;i++)
    {
        cout<<"Enter element: ";
        cin>>a[i];
    }
    cout<<endl;
    cout<<"----------------"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"Element value of a["<<i<<"]: "<<a[i]<<endl;
    }

    cout<<"-----------------"<<endl;
    cout<<"Enter index for update: ";
    cin>>index;
    cout<<"Enter element for update: ";
    cin>>element;
    cout<<"-----------------"<<endl;

    a[index]=element;

    for(int i=0;i<5;i++)
    {
        cout<<"Element value of a["<<i<<"]: "<<a[i]<<endl;
    } 
    
    cout<<"-----------------"<<endl;

    return 0;
}