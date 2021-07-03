#include<bits/stdc++.h>
using namespace std;
#define E "\n"

class Person
{
    public:
        void intro()
        {
            cout<<"I am form Person"<<E;
        }
};

class Student:public Person
{
    public:
        void intro()
        {
            cout<<"I am from student"<<E;
        }


};

void whoIsHere(Person temp)
{
    temp.intro();
}
int main()
{

    Student mujahid;
    mujahid.intro();
    whoIsHere(mujahid);
            /*
    Output of this program
    I am from student
    I am form Person


    */
    return 0;
}
