// Print 1 3 5 7 9

// Step 1: Start
// Step 2: Intialize variable i by 1
// Step 3: Print i
// Step 4: Increment i by 2, i = i + 2
// Step 5: Check the condition if (i < 10) 
// Step 6: If the condition is true, go to step 3 otherwise go to step 7
// Step 7: End

#include<iostream>
using namespace std;

int main(){

    int i=1;
    do
    {
        cout<<i<<" ";
        i+=2;
    }while(i<10);
    return 0;
}