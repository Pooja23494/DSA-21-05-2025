// Curd operation in vector using class

#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;

class Demo{
    public:
        vector<int> v1;

        void addElement(int element)
        {
            v1.push_back(element);
        }

        void updateElement(int index, int element)
        {
            if(index>=0 && index<v1.size())
            {
                v1[index]=element;
                cout<<"Element updated successfully."<<endl;
            }
            else
            {
                cout<<"Index out of bounds."<<endl;
            }
        }
        
        void deleteElement(int index)
        {
            if(index>=0 && index<v1.size())
            {
                v1.erase(v1.begin()+index);
                cout<<"Element deleted successfully."<<endl;
            }
            else
            {
                cout<<"Index out of bounds."<<endl;
            }
        }

        void printElement()
        {
            if(v1.empty())
            {
                cout<<"Vector is empty."<<endl;
            }
            else
            {
                system("cls");
                cout<<"Vector is: ";
                for(int i=0;i<v1.size();i++)
                {
                    cout<<v1.at(i)<<" ";
                }
                cout<<endl;
            }
        }

        void clearVector()
        {
            v1.clear();
            cout<<"Vector clear successfully.."<<endl;
        }
};
int main(){

    int size,index,element,choice;
    Demo d;

    do{
        if(choice!=4)
        {
           system("cls");
        }
        cout<<"Enter 1 for Add Element"<<endl;
        cout<<"Enter 2 for Update Element"<<endl;
        cout<<"Enter 3 for Delete Element"<<endl;
        cout<<"Enter 4 for View All Element"<<endl;
        cout<<"Enter 5 for Insert Multiple Element"<<endl;
        cout<<"Enter 6 for Clear Vector"<<endl;
        cout<<"Enter 0 for Exit"<<endl;
        cout<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"Enter Element: ";
                cin>>element;
                d.addElement(element);
                cout<<"Element added successfully."<<endl;
                break;
            case 2:
                cout<<"Enter index for update: ";
                cin>>index;
                cout<<"Enter element for update: ";
                cin>>element;
                d.updateElement(index,element); 
                break;
            case 3:
                cout<<"Enter index for delete: ";
                cin>>index;
                d.deleteElement(index);
                break;
            case 4:
                d.printElement(); 
                break;
            case 5:
                cout<<"Enter size of vector: ";
                cin>>size;
                for(int i=0;i<size;i++)
                {
                    cout<<"Enter Element ["<<i<<"]: ";
                    cin>>element;
                    d.addElement(element);
                }
                cout<<"Elements added successfully."<<endl; 
                break;
            case 6:
                d.clearVector(); 
                break;
            case 0:
                cout<<"Exit."<<endl;
                break;
            default:
                cout<<"Wrong choice!"<<endl;
                break;
        }

    }while(choice!=0);
    return 0;
}