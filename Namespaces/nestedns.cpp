#include<iostream>
using namespace std;

namespace first{
    void func(){
        cout<<"Inside the first namespace\n";
    }
    namespace second{
        void func(){
            cout<<"INside the nested namespace\n";
        }
    }
}

int main(){
    first::func();
    first::second::func();
    return 0;
}