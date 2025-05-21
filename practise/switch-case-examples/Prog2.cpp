// Enter a character and check if it's a vowel(use switch).

#include<iostream>
using namespace std;

int main(){

    char character;

    cout<<"Enter a Character: ";
    cin>>character;

    switch (character)
    {
    case 'a':
        cout<<"It is a vovel.";
        break;
    
    case 'e':
        cout<<"It is a vovel.";
        break;

    case 'i':
        cout<<"It is a vovel.";
        break;

    case 'o':
        cout<<"It is a vovel.";
        break;

    case 'u':
        cout<<"It is a vovel.";
        break;

    default:
        cout<<"It is a consonant.";
        break;
    }
    return 0;
}