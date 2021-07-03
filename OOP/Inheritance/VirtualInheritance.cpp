#include<bits/stdc++.h>
using namespace std;
#define E "\n"

/*
    If we create constructor for every four class then of course
    it will execute following order
    Animal -> Tiger -> Lion -> Liger

    And then finally method will execute
*/

class Animal
{
    public:
        Animal()
        {
            cout<<"Constructor Animal walk\n";
        }
        int age;
        void walk()
        {
            cout<<"From Animal walk\n";
        }
};
class Tiger : virtual public Animal
{
    public:
         Tiger()
        {
            cout<<"Constructor Tiger walk\n";
        }
        int age;
        void walk()
        {
            cout<<"From Tiger walk\n";
        }
};

class Lion : virtual public Animal
{
    public:
         Lion()
        {
            cout<<"Constructor Lion walk\n";
        }
        int age;
        void walk()
        {
            cout<<"From Lion walk\n";
        }
};

class Liger :  public Tiger,Lion
{
    public:
         Liger()
        {
            cout<<"Constructor Liger walk\n";
        }
        int age;
        void walk()
        {
            cout<<"From Animal walk\n";
        }
};

int main()
{
    Liger devid;
    devid.walk();

            /*
    Output of this program

    Constructor Animal walk
    Constructor Tiger walk
    Constructor Lion walk
    Constructor Liger walk
    From Animal walk
    */
    return 0;
}
