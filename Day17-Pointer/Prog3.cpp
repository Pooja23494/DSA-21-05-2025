// Sum through pointer

#include<iostream>
using namespace std;

int main()
{
    int a,b,sum,sub,mul,div,choice;
    int *ptrA,*ptrB;

    do
    {
        cout<<endl;
        cout<<"Press 1 for +"<<endl;
        cout<<"Press 2 for -"<<endl;
        cout<<"Press 3 for *"<<endl;
        cout<<"Press 4 for /"<<endl;
        cout<<"Press 0 for the exit"<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;

        switch (choice)
        {
        case 1:
                cout<<"Enter value of A: ";
                cin>>a;

                cout<<"Enter value of B: ";
                cin>>b;

                ptrA=&a;
                ptrB=&b;
                sum=*ptrA+*ptrB;

                cout<<"Sum of "<<*ptrA<<" and "<<*ptrB<<" is: "<<sum<<endl;

            break;
        case 2:
                cout<<"Enter value of A: ";
                cin>>a;

                cout<<"Enter value of B: ";
                cin>>b;

                ptrA=&a;
                ptrB=&b;
                sub=*ptrA-*ptrB;

                cout<<"Substraction of "<<*ptrA<<" and "<<*ptrB<<" is: "<<sub<<endl;

            break;
        case 3:
                cout<<"Enter value of A: ";
                cin>>a;

                cout<<"Enter value of B: ";
                cin>>b;

                ptrA=&a;
                ptrB=&b;
                mul=(*ptrA)*(*ptrB);

                cout<<"Multiplication of "<<*ptrA<<" and "<<*ptrB<<" is: "<<mul<<endl;

            break;
        case 4:
                cout<<"Enter value of A: ";
                cin>>a;

                cout<<"Enter value of B: ";
                cin>>b;

                ptrA=&a;
                ptrB=&b;
                div=(*ptrA)/(*ptrB);

                cout<<"Division of "<<*ptrA<<" and "<<*ptrB<<" is: "<<div<<endl;

            break;
        case 0:
                cout<<"Exit"<<endl;
            break;
        
        default:
                cout<<"Wrong Choice!"<<endl;
            break;
        }
    } while (choice!=0);
    
    
    return 0;
}