#include<iostream>
using namespace std;

class Point{
private:
    int id;
public:
    Point(int x){
        id=x;
    }

    void display(){
        cout<<"Id is "<<id<<endl;
    }
};

int main(){
    Point obj1(10);
    Point obj2(obj1); //Implicit Copy Constructor call

    obj2.display();

    return 1;
}