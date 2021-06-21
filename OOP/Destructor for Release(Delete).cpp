#include<bits/stdc++.h>
using namespace std;
#define E "\n"

// Destructor has no return value/type or not have parameter
// It is called automatically after completing class item
// It initialize with a sign ~ named Tilde

class Phone
{
private:
    string *name;
    int *PhonePrice;
public:
    Phone(string companyName, string modelName, int price)
    {
        name = new string;
        PhonePrice = new int;
        *name = companyName;
        *PhonePrice = price;
        cout<<"Company Name :"<<*name<<E<<"Model Name :"<<modelName<<E<<"Price :"<<price<<E;
    }
    ~Phone()
    {
        delete name;
        delete PhonePrice;
        cout<<"Item deleted"<<E;
    }

};


int main()
{
    Phone *samsung = new Phone("Samsung","A201",17100);
    cout<<E;

    delete samsung;// for this line of code destructor will be called

    cout<<E;

    Phone apple("Apple","I10",660); // For this no need to call destructor

    // That's means for pointer we need to call the destructor manually. (Delete)

        /*
    Output
    Company Name :Samsung
    Model Name :A201
    Price :17100

    Item deleted

    Company Name :Apple
    Model Name :I10
    Price :660
    Item deleted


    */
    return 0;
}
