// Nested function

#include<iostream>
using namespace std;

string diya()
{
    cout<<"I am Diya."<<endl;
}
string pooja()
{
    cout<<"I am Pooja."<<endl;
    diya();
}
int main()
{
    pooja();
    return 0;
}