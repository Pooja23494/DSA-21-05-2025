// Factors
// Step 1: Start
// Step 2: Initialize variables
// Step 3: Check the condition (i<=n)
// Step 4: If the condition is true, then repeat the step 5 to 8 otherwise go to step 9
// Step 5: If n is divisible by i (n%i==0),then go to step 6 otherwise go to step 7
// Step 6: Print i as factor of n
// Step 7: Increment i by 1
// Step 8: Go to step 4
// Step 9: End

#include<iostream>
using namespace std;

int main(){

    int n,i=1;

    cout<<"Enter Number: ";
    cin>>n;

    while(i<=n)
    {
        if(n%i==0)
        {
            cout<<i<<" Factor of "<<n<<endl;
        }
        i++;
    }
    return 0;
}