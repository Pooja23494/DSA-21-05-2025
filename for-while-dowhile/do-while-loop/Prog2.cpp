// Print 5 4 3 2 1

// Step 1: Start
// Step 2: Intialize variable i by 5
// Step 3: Print i
// Step 4: Decrement i by 1
// Step 5: Check the condition if (i >= 1) 
// Step 6: If the condition is true, go to step 3 otherwise go to step 7
// Step 7: End

#include<iostream>
using namespace std;

int main(){

    int i=5;
    do
    {
        cout<<i<<" ";
        i--;
    }while(i>=1);
    return 0;
}