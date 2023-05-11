#include <iostream>
using namespace std;

int main()
{
    int A[10]={5,9,56,64,69,420,78,80,1,9};
    int l=0, h=9, key, mid;

    cout<<"Enter key: ";
    cin>>key;

    while(l<=h) 
    {   mid=(l+h)/2;
        if(key==A[mid])
        {
            cout<<"Found at: "<<mid;
            return 0;
        }
        else if(key<A[mid])
            h=mid-1;
        else 
            l=mid+1;
    }
    cout<<"Not Found....";
}