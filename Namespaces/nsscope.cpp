#include<iostream>
using namespace std;

namespace ns{
    void display();
    class Jack{
        public:
        void display();
    };
}

void ns::display(){
    cout<<"I'm not inside the class\n";
}

void ns::Jack::display(){
    cout<<"I'm inside the class\n";
}

int main(){
    ns::display();
    ns::Jack obj1;
    obj1.display();
}