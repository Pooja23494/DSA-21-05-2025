// Curd Operation.

#include<iostream>
using namespace std;

template <typename T>
class Demo{
    private:
        T *arr;
        T size;
        T element;
    public:
        Demo(T size){
            this->size=size;
            arr = new T[size];
            if(arr == NULL)
            {
                cout<<"Memory not allocated."<<endl;
            }
            else
            {
                cout<<"Memory allocated."<<endl;
            }
        }
        ~Demo(){
            delete[] arr;
            cout<<"Memory dealloacted."<<endl;
        }
        void setArray(T size)
        {
            for(int i=0;i<this->size;i++)
            {
                cout<<"Enter element at index["<<i<<"]: ";
                cin>>element;
                arr[i]=element;
            }
            cout<<"Array created.."<<endl;
        }
        void getArray()
        {
            for(int i=0;i<this->size;i++)
            {
                cout<<"Value of index["<<i<<"]: "<<this->arr[i]<<endl;
            }
        }
        void updateAtIndex(int index, T element)
        {
            if(index>=0 && index<this->size)
            {
                arr[index]=element;
                cout<<"Array element updated successful.."<<endl;
            }
            else
            {
                cout<<"Index out of bounds."<<endl;
            }
        }
        void deleteAtIndex(int index)
        {
            if(index>=0 && index<this->size)
            {
                for(int i=index;i<this->size-1;i++)
                {
                    arr[i]=arr[i+1];
                }
                this->size--;
                cout<<"Array element deleted successful.."<<endl;
            }
            else
            {
                cout<<"Index out of bounds."<<endl;
            }
        }
        void insertAtIndex(int index, T element)
        {
            if(index>=0 && index <this->size)
            {
                for(int i=this->size;i>=index;i--)
                {
                    arr[i]=arr[i-1];
                }
                arr[index]=element;
                this->size++;
                cout<<"Array element inserted successful.."<<endl;
            }
            else
            {
                cout<<"Index out of bounds."<<endl;
            }
        }
};
int main(){

    int size,index,element,choice;
    cout<<"Enter size of array: ";
    cin>>size;

    Demo<int> d(size);
    d.setArray(size);

    do{
        cout<<endl;
        cout<<"Enter 1 for Insert Element"<<endl;
        cout<<"Enter 2 for Update Element"<<endl;
        cout<<"Enter 3 for Delete Element"<<endl;
        cout<<"Enter 4 for View Array"<<endl;
        cout<<"Enter 0 for Exit."<<endl;
        cout<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch (choice)
        {
        case 1:
            cout<<"Enter index for insert: ";
            cin>>index;
            cout<<"Enter element for insert: ";
            cin>>element;

            d.insertAtIndex(index,element);
            break;

        case 2:
            cout<<"Enter index for update: ";
            cin>>index;
            cout<<"Enter element for update: ";
            cin>>element;

            d.updateAtIndex(index,element);
            break;
            
        case 3:
            cout<<"Enter index for delete: ";
            cin>>index;

            d.deleteAtIndex(index);
            break;

        case 4:
            d.getArray();
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