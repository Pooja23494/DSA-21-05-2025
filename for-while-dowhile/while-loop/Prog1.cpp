// Print 1 2 3 4 5 6 7 8

// Step 1: Start
// Step 2: Intialize variable i by 1
// Step 3: Check the condition(i <= 8)
// Step 4: If the condition is true than go to step 5, otherwise go to step 8
// Step 5: Print i
// Step 6: Increment i by 1
// Step 7: End

#include<iostream>
using namespace std;

int main(){

    int i=1;
    while(i<=8)
    {
        cout<<i<<" ";
        i++;
    }
    return 0;
}