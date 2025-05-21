// Print factorial of a given number.

#include<iostream>
using namespace std;

int main(){

    int n;
    double factorial = 1.0;

    cout<<"Enter a positive integer number: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        factorial *= i;
    }
    cout<<"Factorial of "<<n<<" = "<<factorial;
    return 0;
}

