#include <iostream>
using namespace std;

int main()
{
    int A[10], n=10, key;
    cout<<"Give input(s) here: ";
    
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }
    cout<<"Enter Key: ";
    cin>>key;

    for(int i=0; i<n; i++)
    {
        if(key==A[i])
        {
            cout<<"Found at: "<<i;
            return 0;
        }
    }
    cout<<"Unable to find this key, please try something valid.";

    return 0;
}