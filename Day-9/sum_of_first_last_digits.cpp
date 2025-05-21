// Sum of first and last digits
// Step 1: Start
// Step 2: Initialize variables
// Step 3: Initialize sum by 0
// Step 4: lastDigit = n % 10
// Step 5: Repeat step 6 to 9 if the condition is true (n>0)
// Step 6: FirstDigit = n % 10
// Step 7: sum = sum + FirstDigit
// Step 8: n = n / 10
// Step 9: Go to step 5
// Step 10: Print FirstDigit + lastDigit
// Step 11: End

#include<iostream>
using namespace std;

int main(){

    int n,lastDigit,FirstDigit,sum=0;

    cout<<"Enter Number: ";
    cin>>n;

    lastDigit=n%10;
    while(n>0)
    {
        FirstDigit=n%10;
        sum=sum+FirstDigit;
        n=n/10;
    }
    cout<<"Sum of first and last digits: "<<FirstDigit+lastDigit;
    return 0;
}