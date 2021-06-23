#include<bits/stdc++.h>
using namespace std;
#define E "\n"

class City
{
    public:
        string name;
        int area;
        void setName(string s)
        {
            name = s;
        }

        void setArea(int ar)
        {
            area = ar;
        } // Must have to give braces otherwise will give an error

};


class District : public City
{
    public:
        string type;
        void setType(string s)
        {
            type = s;
        }

        //show everything

        void showDetails()
        {
            cout<<"Name of the city is "<<name<<E<<"Area is "<<area<<E<<"And this is "<<type<<E;
        }
};

int main()
{
    District kish;
    kish.setName("Kishoregonj");
    kish.setArea(3434);
    kish.setType("District Sadar ");
    kish.showDetails();

            /*
    Output of this program
    Name of the city is Kishoregonj
    Area is 3434
    And this is District Sadar


    */
    return 0;
}
