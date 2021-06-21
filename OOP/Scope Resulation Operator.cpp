#include<bits/stdc++.h>
using namespace std;
#define E "\n"

// define method outside of the class but declare inside the class
// It is called abstraction too

class Phone
{
public:
    string name;
    int price = 1212324;
    void show();
};

void Phone :: show()
{
     cout<<"Name = "<<name<<"\nPrice = " <<price<<E;
}

int main()
{
    Phone samsung;
    samsung.name = "Samsung";
    samsung.price = 120;
    samsung.show();

    /*
    Output
    Name = Samsung
    Price = 120
    */
    return 0;
}

