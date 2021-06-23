#include<bits/stdc++.h>
using namespace std;
#define E "\n"

// For accessing private property of an object om outside of that class we have to use friend function

class City
{
    string name;
    int area;

public:
    City(string cityName,int cityArea)
    {
        name = cityName;
        area = cityArea;
    }


    friend void display(City x); // declare / declaration
    void area();
};

void display(City temp) // Define/Definition
{
    cout<<"Area of "<<temp.name<<" is "<<temp.area<<" square KM"<<E;
}
void City :: area()
{
    cout<<"From other method "<<area<<E;
}

int main()
{

    City dhaka("Dhaka",1240);
    display(dhaka);

    dhaka.area();


            /*
    Output of this program

    Area of Dhaka is 1240 square KM

    */
    return 0;
}
