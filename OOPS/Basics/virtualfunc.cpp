#include<iostream>
using namespace std;

class Shape{
public:
    Shape(int l, int w){
        length = l;
        width = w;
    }

    int get_Area(){
        cout<<"This is a call to parent class"<<endl;
        return 1;
    }
protected:
    int length, width;    
};

class Square: public Shape{
public:
    Square(int l=0, int w=0)
    :Shape(l,w)
    {}

    int get_Area(){
        cout<<"Square AREA"<<endl;
        return 1;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(int l = 0, int w = 0)
        : Shape(l, w)
    {
    } // declaring and initializing derived class
    // constructor
    int get_Area()
    {
        cout << "Rectangle area: " << length * width
             << '\n';
        return (length * width);
    }
};

int main(){
    Shape *s;
    Square sq(5,5);
    Rectangle rec(5,4);
    s=&sq;
    s->get_Area();
    s=&rec;
    s->get_Area();
    return 1;
}