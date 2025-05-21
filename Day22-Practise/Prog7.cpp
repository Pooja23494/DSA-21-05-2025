// Create a class Time with hours, minutes, and seconds. Add methods to input and display time in hh:mm:ss formate.

#include<iostream>
using namespace std;

class Time
{
private:
    int h, m, s;
public:
    void setTime()
    {
        cout<<"Enter Hour : ";
        cin>>this->h;
        cout<<"Enter Minutes: ";
        cin>>this->m;
        cout<<"Enter Seconds: ";
        cin>>this->s;
    }
    void getTime()
    {
        cout<<endl;
        cout<<"Time is: "<<this->h<<":"<<this->m<<":"<<this->s<<endl;
    }
};
int main()
{
    Time t;
    t.setTime();
    t.getTime();
    
    return 0;
}