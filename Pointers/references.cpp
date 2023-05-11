#include <iostream>
using namespace std;

int main()
{
    int x=69;
    int &y=x;

    cout<<x<<endl;
    y++;
    x++;
    cout<<x<<endl;
    cout<<&x<<" "<<&y;

    return 0;
}