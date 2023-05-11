#include <iostream>
using namespace std;

int main()
{
    int A[10]={2,5,10,6,69,50,150,420,419};
    int n=10, max;
    max=A[0];

    for(int i=1; i<10; i++)
    {
        if (A[i]>max)
        {
            max=A[i];
        }
    }
    cout<<"The maximum number here is: "<<max;

    return 0;
}