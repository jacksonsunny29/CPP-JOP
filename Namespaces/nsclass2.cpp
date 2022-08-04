#include<iostream>
using namespace std;

namespace ns{
    class Jack;
}

class ns::Jack{
    public:
    void func(){
        cout<<"Hello I'm defined out of NS but I'm declared inside NS, lol!\n";
    }
};

using namespace ns;

int main(){
    Jack obj1;
    obj1.func();
    return 0;
}