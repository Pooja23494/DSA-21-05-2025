// Print the sum of first N natural numbers.

#include<iostream>
using namespace std;

int main(){

    int n,sum=0;

    cout<<"Enter a positive integer number: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        sum += i;
    }
    cout<<"Sum of natural numbers: "<<sum;
    return 0;
}