// Passing a array.

#include<iostream>
using namespace std;

void func(int n[])
{
    for(int i=0;i<3;i++)
    {
        cout<<"n["<<i<<"]: "<<n[i]<<endl;
    }
}
int main(){

    int a[3]={1,2,3};

    func(a);

    return 0;
} 