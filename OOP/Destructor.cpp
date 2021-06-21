#include<bits/stdc++.h>
using namespace std;
#define E "\n"

// Destructor has no return value/type or not have parameter
// It is called automatically after completing class item
// It initialize with a sign ~ named Tilde

class Phone
{
public:
    string name;
    int price = 1212324;
    void show()
    {
         cout<<"Name = "<<name<<"\nPrice = $" <<price<<E;
    }
    ~Phone()
    {
        cout<<"We are in Destructor \n";
    }

};


int main()
{
    Phone samsung;
    samsung.name = "Apple";
    samsung.price = 1233;
    samsung.show();

    /*
    Output
    Name = Apple
    Price = $1233
    We are in Destructor

    */
    return 0;
}
