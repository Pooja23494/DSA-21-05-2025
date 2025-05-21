// Print 1 2 3 4 5 6 7 8

// Step 1: Start
// Step 2: Intialize variable i by 1
// Step 3: Print i
// Step 4: Increment i by 1
// Step 5: Check the condition if (i <= 8) 
// Step 6: If the condition is true, go to step 3 otherwise go to step 7
// Step 7: End

#include<iostream>
using namespace std;

int main(){

    int i=1;
    do
    {
        cout<<i<<" ";
        i++;
    }while(i<=8);
    return 0;
}