#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout<<"Enter the no. that you need the table for: ";
    cin>>n;

    for (i=10; i>=1; i--)
    {
        cout<<n<<" x "<<i<< " = "<< n*i << endl;
    }

    return 0;
}