#include<bits/stdc++.h>
using namespace std;
#define E "\n"

class Phone
{
    public:
        void intro()
        {
            cout<<"no parameter"<<E;
        }
        void intro(int n)
        {
            cout<<"one parameter with in"<<E;
        }
        void intro(string s)
        {
            cout<<"One parameter with string \n";
        }

        void intro(int x,string s)
        {
            cout<<"Two parameter with int and string\n";
        }

        void intro(string s,int n)
        {
            cout<<"two parameter with string and int \n";
        }
};

int main()
{

    Phone Samsung;
    Samsung.intro();
    Samsung.intro(43);
    Samsung.intro("Prince is cheap");
    Samsung.intro("Prince is cheap",43);
    Samsung.intro(43,"Prince is cheap");

            /*
    Output of this program

    no parameter
    one parameter with in
    One parameter with string
    two parameter with string and int
    Two parameter with int and string
    */
    return 0;
}
