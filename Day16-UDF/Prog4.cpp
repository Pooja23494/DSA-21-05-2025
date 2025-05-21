// TSRS

#include<iostream>
using namespace std;

int cube(int n)
{
    cout<<"Cube of "<<n<<": "<<n*n*n;
    return n;
}
int main()
{
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    cube(n);
    return 0;
}