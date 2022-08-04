#include<iostream>
using namespace std;

template <typename T> T myMax(T x, T y){
    return (x>y)?x:y;
}

int main(){
    int a,b;
    double c,d;
    cout<<"Enter integers\n";
    cin>>a>>b;
    cout<<"Enter doubles\n";
    cin>>c>>d;
    cout<< myMax<int>(a,b)<<endl;
    cout<< myMax<double>(c,d)<< endl; // call myMax for double
    //cout<< myMax<char>('g', 'e') << endl; // call myMax for char
    return 0;
}
