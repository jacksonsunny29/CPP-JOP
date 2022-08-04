#include<iostream>
using namespace std;

template <typename T, typename S> class A{
    T x;
    T s;
public:
    A(){
        cout<<"Constructor called\n";
    }
}; 

int main(){
    A<int,char> a;
    return 0;
}