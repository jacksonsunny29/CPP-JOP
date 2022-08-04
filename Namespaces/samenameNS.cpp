#include<iostream>
using namespace std;

namespace first{
    void func1(){
        cout<<"Hello There!\n";
    }
}

namespace  first{
    void func2(){
        cout<<"Continuation of namespace!\n";
    }
}

using namespace first;

int main(){
    func1();
    func2();
    return 0;
}