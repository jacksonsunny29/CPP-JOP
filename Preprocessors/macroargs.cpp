#include<iostream>
using namespace std;

#define AREA(l,b) (l*b)

int main(){
    int l1=5, l2=6, area;
    area= AREA(l1,l2);
    cout<<area<<"\n";
    return 0;
}