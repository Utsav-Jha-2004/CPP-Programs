#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;

    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};
int main()
{
    Rectangle r1;
    Rectangle *ptr;
    //Rectangle *ptr=new Rectangle .... could also have used to store it in heap
    ptr = &r1;
    ptr->length=10;
    ptr->breadth=5;
    cout<<"Area is: "<<ptr->area()<<endl;
    cout<<"Perimeter is: "<<ptr->perimeter()<<endl;
}