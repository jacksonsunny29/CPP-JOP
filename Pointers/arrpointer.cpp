#include<iostream>
using namespace std;

int main(){
    int arr[2][3]={{16,18,19},{18,20,22}};
    int *ptr;
    ptr=&arr;
    cout<<*(*ptr)<<endl;
    return 1;
}