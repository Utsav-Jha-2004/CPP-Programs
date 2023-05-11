#include <iostream>
using namespace std;

int main()
{
    long long n,i,fact=1;
    cout<<"Enter n: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        fact = fact * i;
    }
    cout<<n<<"! = "<<fact<<endl;

    return 0;
}