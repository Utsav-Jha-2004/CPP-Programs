#include <iostream>
using namespace std;

int main()
{
    int n, i, sum=0, count=0;
    cout<<"Enter n: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
            count++;
            cout<<i<<" ";
        } 
    }
    cout<<endl<<"Sum of factors is: "<<sum<<endl; 
    
    if(2*n==sum)
        cout<<n<<" is a perfect no."<<endl;
    else
        cout<<n<<" isn't a perfect no."<<endl;

    if(count==2)
        cout<<n<<" is a prime no."<<endl;
    else
        cout<<n<<" is a composite no."<<endl;

    return 0;
}