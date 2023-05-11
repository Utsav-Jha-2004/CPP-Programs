#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age:";
    cin>>age;

    if(age<12 || age>50)
    {
        cout<<"Congratulations, you're eligible for our program"<<endl;
    }
    else
    {
        cout<<"Unfortunately, you are'nt eligible"<<endl;
    }

    return 0;
}