// Curd Operation

#include<iostream>
using namespace std;

class Demo{
    public:
        int *arr,size;
        int element;
    public:
        Demo(int size){
            this->size=size;
            arr = new int[size];
            cout<<"Memory allocated."<<endl;
        }
        ~Demo(){
            delete[] arr;
            cout<<"Memory Deallocated."<<endl;
        }
        void setArray(int size)
        {
            for(int i=0;i<this->size;i++)
            {
                cout<<"Enter Elememt at index["<<i<<"]: ";
                cin>>element;
                arr[i]=element;
            }
            cout<<"Array Created."<<endl;
        }
        void getArray()
        {
            for(int i=0;i<this->size;i++)
            {
                cout<<"Value of index["<<i<<"]"<<this->arr[i]<<endl;
            }
        }
        void updateAtIndex(int index, int element)
        {
           if(index>=0 && index<=size-1)
           {
                arr[index]=element;
                cout<<"Element Updated."<<endl;
           }
           else
           {
                cout<<"Out of bounds."<<endl;
           }
        }
        void deleteAtIndex(int index)
        {
            if(index>=0 && index<=size-1)
            {
                for(int i=index;i<this->size-1;i++)
                {
                 arr[i]=arr[i+1];
                }
                this->size--;
                cout<<"Element Deleted."<<endl;
            }
            else
            {
                cout<<"Out of bounds."<<endl;
            }
        }
        void insertAtIndex(int index, int element)
        {
            if(index>=0 && index<=size-1)
            {
                for(int i = size;i>=index;i--)
                {
                    arr[i]=arr[i-1];
                }
                arr[index]=element;
                size++;
                cout<<"Element Inserted."<<endl;
            }
            else
            {
                cout<<"Out of bounds."<<endl;
            }
        }
};
int main(){

    int size,index,element,choice;

    cout<<"Create Array"<<endl;
    cout<<"Enter size of array: ";
    cin>>size;

    Demo obj(size);
    obj.setArray(size);

    do{
        cout<<endl;
        cout<<"Enter 1 for Insert Element"<<endl;
        cout<<"Enter 2 for Update Element"<<endl;
        cout<<"Enter 3 for Delete Element"<<endl;
        cout<<"Enter 4 for Display Array"<<endl;
        cout<<"Enter 0 for Exit"<<endl;
        cout<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;


        switch(choice)
        {
            case 1:
                cout<<"Enter index for Insert: ";
                cin>>index;
                cout<<"Enter element for Insert: ";
                cin>>element;

                obj.insertAtIndex(index,element);
                
                break;

            case 2:
                cout<<"Enter index for update: ";
                cin>>index;
                cout<<"Enter element for update: ";
                cin>>element;

                obj.updateAtIndex(index,element);
                break;

            case 3:
                cout<<"Enter index for delete: ";
                cin>>index;

                obj.deleteAtIndex(index);
                break;

            case 4:
                 obj.getArray();
                 break;

            case 0:
                cout<<"Exit."<<endl;
                break;

            default:
                cout<<"wrong choice!"<<endl;
                break;
        }
    }while(choice!=0);
    return 0;
}