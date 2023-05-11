#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int u, v, a;
    float speed;
    cout << "Enter 3 nos.";
    cin >> u >> v >> a;
    speed = (pow(v, 2) - pow(u, 2)) / (2 * a);
    cout << "Speed is " << speed << endl;

    return 0;
}