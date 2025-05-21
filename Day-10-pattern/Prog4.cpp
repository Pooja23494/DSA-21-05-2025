// Print the following pattern:
//          1
//        1 2
//      1 2 3
//    1 2 3 4
//  1 2 3 4 5

// Step 1: Start
// Step 2: Initialize a variable i with 1
// Step 3: Repeat steps 4-15 while i is less than or equal to 5
// Step 4: Initialize a variable k with 5-1
// Step 5: Repeat steps 6-8 while k is greater than or equal to i
// Step 6: Print space " "
// Step 7: Decrement k by 1
// Step 8: Go to step 5
// Step 9: Initialize a variable j with 1
// Step 10: Repeat steps 11-13 while j is less than or equal to i
// Step 11: Print j
// Step 12: Increment j by 1
// Step 13: Go to step 10
// Step 14: Increment i by 1
// Step 15: Go to step 3
// Step 16: End

#include<iostream>
using namespace std;

int main(){

    for(int i=1;i<=5;i++)
    {
        for(int k=5-1;k>=i;k--)
        {
            cout<<"  ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}