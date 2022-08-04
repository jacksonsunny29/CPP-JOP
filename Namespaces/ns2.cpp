#include<iostream>
using namespace std;

namespace first{
    void func(){
        cout<<"Inside the first namespace!\n";
    }
}

namespace second{
    void func(){
        cout<<"Inside the second namespace!\n";
    }
}

int main(){
    first::func();
    second::func();
    return 0;
}