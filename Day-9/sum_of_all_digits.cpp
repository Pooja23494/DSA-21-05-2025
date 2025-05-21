// Sum of all digits
// Step 1: Start
// Step 2: Initialize variables
// Step 3: Initialize sum by 0
// Step 4: Repeat the step 5 to 8 if the condition is true (n>0)
// Step 5: lastDigit = n % 10
// Step 6: sum = sum + lastDigit
// Step 7: n = n / 10
// Step 8: Go to step 4
// Step 9: Print sum
// Step 10: End

#include<iostream>
using namespace std;

int main(){

    int n,lastDigit,sum=0;

    cout<<"Enter Number: ";
    cin>>n;

    while(n>0)
    {
        lastDigit=n%10;
        sum=sum+lastDigit;
        n=n/10;
    }
    cout<<"Sum of all digits: "<<sum;
    return 0;
}