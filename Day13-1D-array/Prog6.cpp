// size of array.

// Step 1: Start
// Step 2: Initialize variables,array
// Step 3: Initialize size = sizeof(a)/sizeof(a[0])
// Step 4: Print size
// Step 5: End

#include<iostream>
using namespace std;

int main(){

    int a[]={10,20,30,40,50,60};
    int size;

    size=sizeof(a)/sizeof(a[0]);

    cout<<"Size of array: "<<size;

    return 0;
}