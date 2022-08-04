#include<iostream>
using namespace std;

class Jack{
    public: 
    string geekname;
    int id;

    void printname();

    void printid(){
        cout<<"Id is : "<<id<<endl;
    }
};

void Jack::printname(){
    cout<<"Geekname is "<<geekname<<endl;
}

int main(){
    Jack obj1;
    obj1.geekname="Jackson";
    obj1.id=29;

    obj1.printname();
    obj1.printid();
    return 0;    
}