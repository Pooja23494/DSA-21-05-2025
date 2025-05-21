// Create a class BankAccount with accountNumber, holderName, and balance. Write functions for deposit, withdrawal, and balance display.

#include<iostream>
using namespace std;

class BankAccount{
private:
    int accountNumber;
    string holdername;
    double balance;
public:
    void setDeposit(double depositAmt,double balance)
    {
        this->balance=this->balance+depositAmt;
    }
    void setWithdrawal(double withdrawalAmt,double balance)
    {
        this->balance=this->balance-withdrawalAmt;
    }
    void setDetails(int accountNumber, string holdername, double balance)
    {
        this->accountNumber=accountNumber;
        this->holdername=holdername;
        this->balance=balance;
    }
    void getDetails()
    {
        cout<<endl;
        cout<<"Account Number: "<<this->accountNumber<<endl;
        cout<<"Account Holder Name: "<<this->holdername<<endl;
        cout<<"Balance: "<<this->balance<<endl;
    }

};
int main(){

    int accountNumber,choice;
    string holdername;
    double balance,depositAmt,withdrawalAmt;

    cout<<"Enter Account Number: ";
    cin>>accountNumber;
    cout<<"Enter Account Holder Name: ";
    cin>>holdername;
    cout<<"Enter Balance: ";
    cin>>balance;

    BankAccount bank;

    bank.setDetails(accountNumber,holdername,balance);

    do
    {
        cout<<endl;
        cout<<"Enter 1 for Deposit"<<endl;
        cout<<"Enter 2 for Withdrawal"<<endl;
        cout<<"Enter 3 for Display Balance"<<endl;
        cout<<"Enter 0 for Exit"<<endl;
        cout<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch (choice)
        {
        case 1:
            cout<<endl;
            cout<<"Enter Deposit Amount: ";
            cin>>depositAmt;

            bank.setDeposit(depositAmt,balance);
            cout<<"Deposit Successfully.."<<endl;
            break;

        case 2:
            cout<<endl;
            cout<<"Enter Withdrawal Amount: ";
            cin>>withdrawalAmt;

            if(withdrawalAmt<balance)
            {
                bank.setWithdrawal(withdrawalAmt,balance);
                cout<<"Withdrawal Successfully.."<<endl;
            }
            else
            { 
                cout<<"Insufficient Balance."<<endl;
            }
            break;

        case 3:
            cout<<endl;
            bank.getDetails();
            break;

        case 0:
            cout<<"Exit.";
            break;
        
        default:
            cout<<"Wrong Choice!";
            break;
        }
    } while (choice!=0);
    
    return 0;
}