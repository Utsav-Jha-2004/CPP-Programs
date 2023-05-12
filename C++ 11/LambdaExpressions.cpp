#include <iostream>
using namespace std;

int main()
{
    [](){cout<<"Hello"<<endl;}();
    [](int x, int y){cout<<"Sum is "<<x+y<<endl;}(10,30);
    int a=[](int x, int y)->int{return x+y;}(10,5);
    auto f=[&a](){cout<<a++<<endl;};

    f();
    a++;
    f();
}