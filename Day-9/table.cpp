// Multiplication table
// Step 1: Start
// Step 2: Initialize variables
// Step 3: Repeat step 4 to 5 if the condition is true (i<=10)
// Step 4: Print n x i = n*i
// Step 5: Go to step 3
// Step 6: End

#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"Enter Number: ";
    cin>>n;

    for(int i=1;i<=10;i++)
    {
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}