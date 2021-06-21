#include<bits/stdc++.h>
using namespace std;
#define E "\n"


// If there multiple constructor under a single class then only one constructor will during execution of the program

class Country
{
public:
    Country()
    {
        cout<<"Default Constructor "<<E;
    }
    Country(string name,string PM)
    {
        cout<<"Name = "<<name<<"Prime Minister "<<PM;
    }
    Country(string name,string PM,int age)
    {
        cout<<"Name = "<<name<<"Prime Minister "<<PM;
        cout<<"PM age = "<<age<<E;
    }
};


int main()
{

    Country Aus;
    cout<<E;
    Country Bangladesh("BAN\n","SH\n");
    cout<<E;
    Country Saudi("KSA\n","MBS\n",35);

            /*
    Output of this program

    Default Constructor

    Name = BAN
    Prime Minister SH

    Name = KSA
    Prime Minister MBS
    PM age = 35


    */
    return 0;
}
