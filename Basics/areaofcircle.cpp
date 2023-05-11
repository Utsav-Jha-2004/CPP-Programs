#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float area, r;

    cout << "Enter the radius";
    cin >> r;
    area = (float)22/7 * pow(r, 2);
    cout << "The Area is " << area << endl;

    return 0;
}