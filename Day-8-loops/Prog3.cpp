// Factorial 
// Step 1: Start
// Step 2: Initialize variables
// Step 3: Initialize a variable i with n
// Step 4: Check the condition(i>=1)
// Step 5: If the condition is true,then go to step 6 otherwise go to step 9
// Step 6: fact = fact * i
// Step 7: Decrement i by 1
// Step 8: Go to step 4
// Step 9: Print value of fact
// Step 10: End

#include<iostream>
using namespace std;

int main(){

    int n,fact=1,i;

    cout<<"Enter Number: ";
    cin>>n;
    
    i=n;
    while(i>=1)
    {
        fact*=i;
        i--;
    }
    cout<<"Factorial of "<<n<<" is: "<<fact;
    return 0;
}