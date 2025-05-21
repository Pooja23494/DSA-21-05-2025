// Print 5 4 3 2 1

// Step 1: Start
// Step 2: Intialize variable i by 5
// Step 3: Repeat steps 4-6, if the condition true (i >= 1)
// Step 4: Print i
// Step 5: Decrement i by 1
// Step 6: Go to step 3
// Step 7: End

#include<iostream>
using namespace std;

int main(){

    for(int i=5;i>=1;i--)
    {
        cout<<i<<" ";
    }
    return 0;
}