// Print 10 8 6 4 2

// Step 1: Start
// Step 2: Intialize variable i by 10
// Step 3: Repeat steps 4-6, if the condition true (i >= 2)
// Step 4: Print i
// Step 5: Decrement i by 2, i = i - 2
// Step 6: Go to step 3
// Step 7: End

#include<iostream>
using namespace std;

int main(){

    for(int i=10;i>=2;i-=2)
    {
        cout<<i<<" ";
    }
    return 0;
}