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

 class Student : protected Person
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

//    Following line will show error,as it is protected inheritance
//
//    Student hazard;
//    hazard.setName("hazard");
//    hazard.display()
;            /*
    Output of this program

    mujahid


    */
    return 0;
}
