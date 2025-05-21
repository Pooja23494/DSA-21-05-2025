#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v1{10,20,30,40,50};

    // insert value at end of array
    v1.push_back(60);

    // delete value at end of array
    v1.pop_back();

    // insert at specific position
    v1.insert(v1.begin(),5);

    // delete at specific position
    v1.erase(v1.begin());  // insert element from front side

    v1.insert(v1.end(),60);  // insert element from end side

    for(int i=0;i<v1.size();i++)
    {
        cout<<v1.at(i)<<" "; // display element at index
    }

    cout<<endl;
    cout<<"Front: "<<v1.front(); // display 0 index element 

    cout<<endl;
    cout<<"End / Back: "<<v1.back(); // display last index element

    // clear array
    v1.clear();
    cout<<endl<<v1.size()<<endl;
    
    // array is empty or not
    if(v1.empty())
    {
        cout<<"Empty";
    }
    else{
        cout<<"Not empty";
    }

    return 0;
}