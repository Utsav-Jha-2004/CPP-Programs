#include <iostream>
using namespace std;

int sum1(int a, int b)
{
    return a+b;
}

float sum2(float a, float b)
{
    return a+b;
}

int sum3(int a, int b, int c)
{
    return a+b+c;
}

int main()
{
    cout<<sum1(10,5)<<endl;
    cout<<sum2(12.5f,3.4f)<<endl;
    cout<<sum3(4,5,6)<<endl;

    return 0;
}