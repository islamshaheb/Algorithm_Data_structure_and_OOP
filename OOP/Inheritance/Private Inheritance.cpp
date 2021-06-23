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

 class Student : private Person
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

 // First base class property will not accessible 2nd derived class.(Student is First derived Class). As
 // all member of base class become private of fist derived class

int main()
{

    Student mojahid;
    mojahid.setNameStudent("mujahid");
    mojahid.display();

/*
    as it is private inheritance following lines will not work



    Student hazard;
    hazard.setName("hazard");
    hazard.display()
;            /*
    Output of this program

    mujahid


    */
    return 0;
}


