#include<iostream>
using namespace std;

enum week{sunday,monday,tuesday,wednesday,thursday,friday,saturday};

int main(){
    week today=wednesday;
    cout<<"Day "<<today+1<<endl;
    return 0;
}