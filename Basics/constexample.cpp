#include<iostream>
using namespace std;

int main(){
    const int i=10;
    i=20; /* It will throw an error as it can't be modified! */
    cout<<i<<"\n";
    return 0;
}