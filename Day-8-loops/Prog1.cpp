// Print sum of n number.
// Step 1: Start
// Step 2: Initialize variables
// Step 3: Check the condition (i<=n)
// Step 4: If the condition is true, then go to step 5 otherwise go to step 8
// Step 5: sum = sum + i;
// Step 6: Increment i by 1
// Step 7: Go to step 3
// Step 8: Print value of sum
// Step 9: End

#include<iostream>
using namespace std;

int main(){

    int n,sum=0,i=1;

    cout<<"Enter Number: ";
    cin>>n;

    while(i<=n)
    {
        sum+=i;
        i++;
    }
    cout<<"Sum of "<<n<<" is: "<<sum;
    return 0;
}