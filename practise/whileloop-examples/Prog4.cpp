// Sum of digits of a number.

#include<iostream>
using namespace std;

int main(){

    int n,sum=0;

    cout<<"Enter number: ";
    cin>>n;

    while(n!=0)
    {
        sum += n%10;
        n=n/10;
    }
    cout<<"Sum of digits: "<<sum;
    return 0;
}

