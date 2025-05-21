// Display the n terms of odd numbers and their sum
// Step 1: Start
// Step 2: Initialize variables
// Step 3: Initialize sum by 0
// Step 4: Repeat step 5 to 8 if the condition is true (i<=n)
// Step 5: Check the condition(i%==1) if true then go to step 6 otherwise go to step 8
// Step 6: Print i
// Step 7: sum = sum + i
// Step 8: Go to step 4
// Step 9: Print sum
// Step 10: End

#include<iostream>
using namespace std;

int main(){

    int n, sum=0;

    cout<<"Enter Number: ";
    cin>>n;

    cout<<"Odd numbers are: ";

    for(int i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            cout<<i<<" ";
            sum +=i;
        }
    }
    cout<<endl;
    cout<<"Sum of odd numbers: "<<sum;


    return 0;
}