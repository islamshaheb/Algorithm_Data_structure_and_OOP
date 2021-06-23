#include<bits/stdc++.h>
using namespace std;
#define E "\n"

class Father
{
    public:
        double height;
        void askYourFather()
        {
            cout<<"From Father\n";
        }
};

class Mother
{
    public:
        string skinColor;
        void askYourMother()
        {
            cout<<"From Mother\n";
        }
};

class Child : public Mother,Father
{
    public:
        string name;
        void askingParent()
        {
            cout<<"Asking Parent \n";
        }
        void setProperty(string nam, string color,int hei)
        {
            name = nam;
            skinColor = color;
            height = hei;
        }

        void display()
        {
            cout<<name<<E<<skinColor<<E<<height<<E;
        }

};

int main()
{
    Child munna;
    munna.setProperty("Munna","WhiteBlack",5.8);
    munna.display();

            /*
    Output of this program
    Munna
    WhiteBlack
    5

    */
    return 0;
}
