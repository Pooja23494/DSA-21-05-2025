// Print the following pattern:
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5

// Step 1: Start
// Step 2: Initialize a variable i with 1
// Step 3: Repeat steps 4-10 while i is less than or equal to 5
// Step 4: Initialize a variable j with 1
// Step 5: Repeat steps 6-8 while j is less than or equal to 5
// Step 6: Print j
// Step 7: Increment j by 1
// Step 8: Go to step 5
// Step 9: Increment i by 1
// Step 10: Go to step 3
// Step 11: End
 
#include<iostream>
using namespace std;

int main(){

    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}