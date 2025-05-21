// Fibonacci Series
// Step 1: Start
// Step 2: Initialize variables
// Step 3: Check the condition (i<=n)
// Step 4: If the condition is true, then go to step 5 otherwise go to step 11
// Step 5: f = f1
// Step 6: f1 = f + f2
// Step 7: f2 = f
// Step 8: Increment i by 1
// Step 9: Print value of f
// Step 10: Go to step 3
// Step 11: End

#include<iostream>
using namespace std;

int main(){

    int n,f,f1=0,f2=1,i=1;

    cout<<"Enter Number: ";
    cin>>n;

    cout<<"Fibonacci Series: ";
    while(i<=n)
    {
        f=f1;
        f1=f+f2;
        f2=f;
        i++;
        cout<<" "<<f;
    }

    return 0;
}