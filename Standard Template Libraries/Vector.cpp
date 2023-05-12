#include <iostream>
#include <vector>//similar for lists, forward_list, sets etc.
using namespace std;

void printVec(vector<int> v) 
{
    cout << "size: " << v.size() << endl;
    for(int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    v.push_back(20);
    v.push_back(30);

    //v.pop_back();

    vector<int>::iterator itr;

    cout<<"using Iterator"<<endl;
    for(itr=v.begin();itr!=v.end();itr++)
        cout<<++*itr<<endl;
    
    cout<<"using for each loop"<<endl;
    for(int x:v)
        cout<<x<<endl;
}