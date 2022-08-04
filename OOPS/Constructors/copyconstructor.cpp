#include<iostream>
using namespace std;

class Point{
private:
    int x,y;
public:
    Point(int x1, int y1){
        x=x1;
        y=y1;
    }

    Point (const Point &p){ //Copy Constructor declared and defined
        x=p.x;
        y=p.y;
    }

    int getx(){ return x; }
    int gety(){ return y; }
};

int main(){
    Point p1(10,5);
    Point p2=p1;//Copy constructor is called; Also Point p2(p1); can be written instead of p1=p2

    cout<<"p1.x = "<<p1.getx()<<endl;
    cout<<"p1.y = "<<p1.gety()<<endl;
    cout<<"p2.x = "<<p2.getx()<<endl;
    cout<<"p2.y = "<<p2.gety()<<endl;

    return 1;
}