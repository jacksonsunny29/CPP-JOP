#include<iostream>
using namespace std;

int main(){
    int *p = new int[20];
    p[1]=20;
    delete p;
    p = new int[40];
    p[1]=90;
    cout<<p[1]<<endl;

}