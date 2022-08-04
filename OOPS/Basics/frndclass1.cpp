#include<iostream>
using namespace std;

class Largest{
    int a,b,c;
    public:
    void set_data();
    friend void find_max(Largest); 
};

void Largest::set_data(){
    cout<<"Enter the First No:";
    cin>>a;
    cout<<"Enter the Second No:";
    cin>>b; 
}

void find_max(Largest t){
    if(t.a>t.b)
        t.m=t.a;
    else
        t.m=t.b;

    cout<<"Maximum Number is \t"<<t.m;

}

int main(){
    Largest l;
    l.set_data();q    
}