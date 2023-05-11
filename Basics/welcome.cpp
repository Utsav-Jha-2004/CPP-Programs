#include <iostream>
using namespace std;

int main()
{
    string name;
    cout<<"May I know your name please ?";
    getline(cin,name);
    cout<<"Welcome Mr./Miss "<<name;

    return 0;
}