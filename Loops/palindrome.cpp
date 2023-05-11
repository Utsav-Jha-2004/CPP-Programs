#include <iostream>
using namespace std;

int main()
{
    int n,r,m,rev=0;
    cout<<"Enter n: ";
    cin>>n;
    m=n;

    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    cout<<"Reverse no. is "<<rev<<endl;

    if(rev==m)
        cout<<"They are palindromes.";
    else
        cout<<"They are not palindromes.";

    return 0;
}