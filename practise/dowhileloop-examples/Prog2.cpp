// Print the multiplication table of any number.

#include<iostream>
using namespace std;

int main(){

    int n,i=1;

    cout<<"Enter Number: ";
    cin>>n;

    do{
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
        i++;
    }while(i<=10);

    return 0;
}