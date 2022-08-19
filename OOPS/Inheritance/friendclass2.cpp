#include<iostream>
using namespace std;

class A{
    int a;
public:
    A(){
        a=10;
    }
    friend class B;
};

class B{
public:
    B(A t){
        cout<<"Class A private var: "<<t.a<<endl;
    }
};

int main(){
    A a;
    B b(a);
}