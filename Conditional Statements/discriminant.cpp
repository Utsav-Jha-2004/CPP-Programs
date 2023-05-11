#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, d, r1, r2;
    cout<<"Enter a, b, and c:";
    cin>>a>>b>>c;
    d = pow(b, 2) - 4*a*c;

    if(d==0)
    {
        cout<<"roots are real & equal"<<endl;
        cout<<(-b/(2*a));
    }
    else if(d>0)
        {
            cout<<"roots are real & unequal"<<endl;
            cout<<(-b+sqrt(d))/(2*a)<<endl;
            cout<<(-b-sqrt(d))/(2*a)<<endl;
        }
        else
        {
            cout<<"roots are imaginary"<<endl;
        }
    return 0;
}