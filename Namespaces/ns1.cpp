#include<iostream>
using namespace std;

namespace first{
    int val=500;
}

int main(){
    int val=100;
    cout<<first::val<<"\n";
    return 0;
}