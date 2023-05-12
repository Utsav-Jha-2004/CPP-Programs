#include <iostream>
#include <fstream>

using namespace std;

class Item
{
private:
    string name;
    float price;
    int qty;
public:
    Item(){}
    Item(string n,float p,int q);
    friend ifstream & operator>>(ifstream &fis,Item &i);
    friend ofstream & operator<<(ofstream &fos,Item &i);
    friend ostream & operator<< ( ostream &os, Item &i);
};

int main()
{
    int n;
    string name;
    float price;
    int qty;
    cout<<"Enter no. of Item: ";
    cin>>n;
    Item *list[n];
    cout<<"Enter All Items "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter "<<i+1<<" Item Name, Price & Quantity";
        cin>>name;
        cin>>price;
        cin>>qty;
        list[i]=new Item(name,price,qty);
    }

    ofstream fos("Items.txt");
    for(int i=0;i<n;i++)
    {
        fos<<*list[i];
    }
    Item item;
    ifstream fis("Items.txt");
    for(int i=0;i<3;i++)
    {
        fis>>item;
        cout<<"Item "<<i<<item<<endl;
    }
}