// Print the reverse of a number.

#include<iostream>
using namespace std;

int main(){

    int n,reverse_number=0,remainder;

    cout<<"Enter the number: ";
    cin>>n;

    while(n!=0)
    {
        remainder=n%10;
        reverse_number=reverse_number*10+remainder;
        n/=10;
    }

    cout<<"Reverse number: "<<reverse_number;
    return 0;
}