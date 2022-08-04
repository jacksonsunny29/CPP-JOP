#include<iostream>
using namespace std;

namespace first{
    void func(){
        cout<<"This is in the first space!\n";
    }
}

namespace second{
    void func(){
        cout<<"This is in the second space!\n";
    }
}

/*using namespace second;*/
using namespace first;

int main(){
    cout<<"Hello THere\n";
    func();
    return 0;
}