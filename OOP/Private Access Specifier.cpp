#include<bits/stdc++.h>
using namespace std;
#define E "\n"

class SocialMedia
{
    // if access specifier is not defined then it will considered as private access specifier
    string name;
    string getName()
    {
        return name = "LinkedIn";
    }

public:
    void displayName()
    {
        cout<<getName()<<E;
    }

    void setName(string tempString)
    {
        name = tempString;
        cout<<name<<E;
    }

};

int main()
{
    SocialMedia linkedin;

    linkedin.setName("FaceBook");
    linkedin.displayName();
            /*
    Output of this program

    FaceBook
    LinkedIn

    */
    return 0;
}

