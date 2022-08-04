#include<iostream>
using namespace std;

namespace first{
    class Jack{
        public:
        void func(){
            cout<<"Hello There\n";
        }
    };
}

using namespace first;
int main(){
    Jack obj1;
    obj1.func();
    return 0;
}