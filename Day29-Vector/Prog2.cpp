// Curd operation in vector

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v1;
    int size,element,choice;

    do{
        cout<<endl;
        cout<<"Enter 1 for Create vector"<<endl;
        cout<<"Enter 2 for update element in vector"<<endl;
        cout<<"Enter 3 for delete element in vector"<<endl;
        cout<<"Enter 4 for Read vector"<<endl;
        cout<<"Enter 0 for exit"<<endl;
        cout<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"Enter size of vector: ";
                cin>>size;

                // insert element in vector
                for(int i=0;i<size;i++)
                {
                    cout<<"Enter element at index["<<i<<"]: ";
                    cin>>element;
                    v1.push_back(element);
                }
                break;
            
            case 2:
                //update element in vector
                int index;

                cout<<"Enter index for update: ";
                cin>>index;
                cout<<"Enter element for update: ";
                cin>>element;

                for(int i=0;i<v1.size();i++)
                {
                    v1[index]=element;
                }
                break;

            case 3:
                //delete element in vector
                int index1;

                cout<<"Enter index for delete: ";
                cin>>index1;

                for(int i=index1;i<v1.size();i++)
                {
                    v1.erase(v1.begin()+index1);
                }
                break;

            case 4:
                // Read element in vector
                for(int i=0;i<v1.size();i++)
                {
                    cout<<"Element at index["<<i<<"]: "<<v1.at(i)<<endl;
                }
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