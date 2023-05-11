#include <iostream>
using namespace std;

int main()
{
    int *p=new int[20];

    delete []p;
    p=new int[40];

    cout<<*p<<endl;
    
    return 0;
}