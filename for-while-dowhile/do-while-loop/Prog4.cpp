// Print 10 8 6 4 2

// Step 1: Start
// Step 2: Intialize variable i by 10
// Step 3: Print i
// Step 4: Decrement i by 2, i = i - 2
// Step 5: Check the condition if (i >= 2) 
// Step 6: If the condition is true, go to step 3 otherwise go to step 7
// Step 7: End

#include<iostream>
using namespace std;

int main(){

    int i=10;
    do
    {
        cout<<i<<" ";
        i-=2;
    }while(i>=2);
    return 0;
}