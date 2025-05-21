// Print 5 4 3 2 1

// Step 1: Start
// Step 2: Intialize variable i by 5
// Step 3: Check the condition(i >= 1)
// Step 4: If the condition is true than go to step 5, otherwise go to step 8
// Step 5: Print i
// Step 6: Decrement i by 1
// Step 7: End

#include<iostream>
using namespace std;

int main(){

    int i=5;
    while(i>=1)
    {
        cout<<i<<" ";
        i--;
    }
    return 0;
}