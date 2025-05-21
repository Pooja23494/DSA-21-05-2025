// Create a class Book with title, author, and price. Include methods to input and display book data.

#include<iostream>
using namespace std;

class Book
{
private:
    string title,author;
    double price;
public:
    void setBook()
    {
        cout<<"Enter Title of Book: ";
        cin>>this->title;
        cout<<"Enter Author: ";
        cin>>this->author;
        cout<<"Enter Price: ";
        cin>>this->price;
    }
    void getBook()
    {
        cout<<endl;
        cout<<"Title of Book: "<<this->title<<endl;
        cout<<"Author: "<<this->author<<endl;
        cout<<"Price: "<<this->price<<endl;
    }
};
int main(){

    Book b;
    b.setBook();
    b.getBook();

    return 0;
}