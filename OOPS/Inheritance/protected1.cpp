#include<iostream>
using namespace std;

class Base{
protected:
    int a,b;
    
    Base(){
        a=10;
        b=20;
    }
public:
    void func(){
        cout<<"Super Class "<<a<<" "<<b<<endl;
    }
};

class Sub : private Base{
public:    
    void func_sub(){
        cout<<"Sub Class "<<a<<" "<<b<<endl;
    }
};

int main(){
    Sub obj1;
    obj1.func_sub();
    return 1;
}