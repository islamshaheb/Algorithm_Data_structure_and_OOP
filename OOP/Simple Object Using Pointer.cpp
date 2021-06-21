#include<bits/stdc++.h>
using namespace std;
#define E "\n"

class Human
{
public:
    int age;
    string name;
    void display()
    {
        cout<<"Age = "<<age<<"\nName = " <<name;
    }
};

int main()
{
    Human *mujahid = new Human;
    mujahid->name = "Mujahid\n";
    mujahid->age = 24;
s
    mujahid->display();


    /*
    Output
    Age = 24
    Name = Mujahid
    */
    return 0;
}

