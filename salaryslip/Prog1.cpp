// Salaryslip.

#include<iostream>
using namespace std;

int main(){

    string employeename;
    double basicsalary,gross,netsalary;
    int hra,da,ma,ta,pt,pf,tds,deduction;


    cout<<"Enter Your Name: ";
    cin>>employeename;
    cout<<"Enter your Basic Salary: ";
    cin>>basicsalary;

    hra=basicsalary*0.1;  
    da=basicsalary*0.08;   
    ma=basicsalary*0.05;
    ta=basicsalary*0.08;
    pf=basicsalary*0.12;
    tds=basicsalary*0.05;

    basicsalary<12000
                ?pt=0
                :pt=200;

    gross=basicsalary+hra+da+ma+ta;
    deduction=pt+pf+tds;
    netsalary=gross-deduction;

    cout<<endl;
    cout<<"*****************"<<endl;
    cout<<"Employee Name: "<<employeename<<endl;
    cout<<"Basic Salary: "<<basicsalary<<endl;
    cout<<"HRA: "<<hra<<endl;
    cout<<"DA: "<<da<<endl;
    cout<<"MA: "<<ma<<endl;
    cout<<"TA: "<<ta<<endl;
    cout<<"PT: "<<pt<<endl;
    cout<<"PF: "<<pf<<endl;
    cout<<"TDS: "<<tds<<endl;
    cout<<"Gross Salary: "<<gross<<endl;
    cout<<"Total Deduction: "<<deduction<<endl;
    cout<<"Net Salary: "<<netsalary<<endl;
    cout<<"*****************";

    return 0;
}