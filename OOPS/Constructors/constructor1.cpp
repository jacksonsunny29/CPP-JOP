#include<iostream>
using namespace std;

class Jack{
public:
    int id;
    Jack(){
        cout<<"Default constructor is called"<<endl;
        id=-1;
    }

    Jack(int x){
        cout<<"Parameterised constructor is called"<<endl;
        id=x;    
    }
};

int main(){
    // Obj1 will call default constructor
    Jack obj1;
    cout<<"Jack id is "<<obj1.id<<endl;
    // Obj2 will call parameterised constructor
    Jack obj2(5);
    cout<<"Jack id is "<<obj2.id<<endl;
    return 1;
}