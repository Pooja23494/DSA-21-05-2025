// Reference variable.

#include<iostream>
using namespace std;

void add(int a,int b)
{
    cout<<"Addition: "<<a+b<<endl;
}
int main(){

    int a=10,b=20;
    int &refa=a;
    int &refb=b;

    add(a,b);

    refa=20;
    refb=30;

    add(a,b);
    return 0;
}