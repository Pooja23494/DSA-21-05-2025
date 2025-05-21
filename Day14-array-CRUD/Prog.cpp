#include <iostream>
using namespace std;

int main()
{

    int a[20];
    int n, index, element, choice;

    do
    {
        cout<<endl<<"----------------"<<endl;
        cout << "Enter 1 for Insert elements" << endl;
        cout << "Enter 2 for Update element" << endl;
        cout << "Enter 3 for Delete element" << endl;
        cout << "Enter 4 for View all elements" << endl;
        cout << "Enter 0 for Exit" << endl;
        cout<<"-----------------"<<endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter number: ";
            cin >> n;

            for (int i = 0; i < n; i++)
            {
                cout << "Enter element of a[" << i << "]: ";
                cin>>a[i];
            }
            break;
        case 2:
            cout << "Enter index of element for update: ";
            cin >> index;
            cout << "Enter element for update: ";
            cin >> element;

            a[index] = element;
            break;
        case 3:
            cout << "Enter index of element for delete: ";
            cin >> index;

            for (int i = index; i <= n - 1; i++)
            {
                a[i] = a[i+1];
            }
            n--;
            break;
        case 4:
            for (int i = 0; i < n; i++)
            {
                cout <<"Element a["<<i<<"]: "<<a[i]<<endl;
            }
            break;
        case 0:
            break;
        default:                                     
            cout << "Wrong choice!!";
            break;
        }

    } while (choice != 0);

    return 0;
}