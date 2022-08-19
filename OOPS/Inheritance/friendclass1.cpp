#include<iostream>
using namespace std;

class A{
    int a;
public:
    A(){
        a=10;
    }
    void func1(){
        a=15;
    }
    friend class B; //declaring Friend Class
};

class B{
public:
    void func(A &t){
        cout<<"Accessing the private member of A "<<t.a<<endl;        
    }
};

int main(){
    A a;
    a.func1();
    B b;
    b.func(a);
    return 1;
}