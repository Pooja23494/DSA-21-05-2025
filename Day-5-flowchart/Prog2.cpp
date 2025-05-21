// Print which value is max from A, B, C, D, E
#include<iostream>
using namespace std;

int main(){

    int a,b,c,d,e;

    cout<<"Enter value of A:";
    cin>>a;

    cout<<"Enter value of B:";
    cin>>b;

    cout<<"Enter value of C:";
    cin>>c;

    cout<<"Enter value of D:";
    cin>>d;

    cout<<"Enter value of E:";
    cin>>e;

    if(a>=b)
    {
        if(a>=c)
        {
            if(a>=d)
            {
                if(a>=e)
                {
                    cout<<"A is max.";
                }
                else
                {
                    cout<<"E is max.";
                }
            }
            else
            {
                if(d>=e)
                {
                    cout<<"D is max.";
                }
                else
                {
                    cout<<"E is max.";
                }
            }
        }
        else
        {
            if(c>=d)
            {
                if(c>=e)
                {
                    cout<<"C is max.";
                }
                else
                {
                    cout<<"E is max.";
                }
            }
            else
            {
                if(d>=e)
                {
                    cout<<"D is max.";
                }
                else
                {
                    cout<<"E is max.";
                }
            }
        }
    }
    else
    {
        if(b>=c)
        {
            if(b>=d)
            {
                if(b>=e)
                {
                    cout<<"B is max.";
                }
                else
                {
                    cout<<"E is max.";
                }
            }
            else
            {
                if(d>=e)
                {
                    cout<<"D is max.";
                }
                else
                {
                    cout<<"E is max.";
                }
            }
        }
        else
        {
            if(c>=d)
            {
                if(c>=e)
                {
                    cout<<"C is max.";
                }
                else
                {
                    cout<<"E is max.";
                }
            }
            else
            {
                if(d>=e)
                {
                    cout<<"D is max.";
                }
                else
                {
                    cout<<"E is max.";
                }
            }
        }
    }

    return 0;
}