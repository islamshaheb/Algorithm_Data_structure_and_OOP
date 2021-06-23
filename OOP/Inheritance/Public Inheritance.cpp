#include<bits/stdc++.h>
using namespace std;
#define E "\n"

 // all member of base class (protected/public) are gonna treat as protected member of derived class

 class Person
 {
     protected:
         string name;
     public:
        void setName(string s)
        {
            name = s;
        }
 };

 class Student : public Person
 {
     public:
        void display()
        {
            cout<<name<<E;
        }
        void setNameStudent(string Name)
        {
            setName(Name);
        }
 };


int main()
{

    Student mojahid;
    mojahid.setNameStudent("mujahid");
    mojahid.display();

/*
    Following line will execute,as it is public inheritance. If it would protected inheritance then following
    lines will not work

*/

    Student hazard;
    hazard.setName("hazard");
    hazard.display()
;            /*
    Output of this program

    mujahid
    hazard


    */
    return 0;
}

