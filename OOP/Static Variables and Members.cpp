#include<bits/stdc++.h>
using namespace std;
#define E "\n"

// execute for the first time for the entire execution of time

// In static method must have to use scope resolution operator

//void display(); // prototyping
class Human
{
public:
    static int humanCount;

    Human()
    {
        humanCount++;
    }

    void totalHuman()
    {
        cout<<"Total Human "<<humanCount<<E;
    }
    static int humanCounter();
};

// we have to write static thing in this way otherwise it will show en error during compilation
int Human :: humanCount = 0;

int main()
{

    cout<<Human :: humanCount<<E;
    Human mojahid;
    mojahid.totalHuman();
    Human islam;
    Human saad;


    islam.totalHuman();

    cout<<Human :: humanCount <<E;
            /*
    Output of this program

    */
    return 0;
}
