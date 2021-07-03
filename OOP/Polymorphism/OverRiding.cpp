#include<bits/stdc++.h>
using namespace std;
#define E "\n"

/// Same name,Same number of parameter,same return type,same parameter type
/// Everything is same here

class Computer
{
    public:
        string name;
        void introduction()
        {
            cout<<"In class Computer"<<E;
        }
};

class HP : public Computer
{
    public:
        string name;
        void introduction()
        {
            cout<<"In class HP"<<E;
        }

};


int main()
{

    HP probook;
    probook.introduction();

            /*
    Output of this program

    */
    return 0;
}
