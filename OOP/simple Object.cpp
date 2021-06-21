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
        cout<<"Age = "<<age<<"\nName = " <<name<<E;
    }
};

int main()
{
    Human mujahid;
    mujahid.name = "Mojahid";
    mujahid.age = 20;
    mujahid.display();

    /*
    Output
    Age = 20
    Name = Mojahid
    */
    return 0;
}
