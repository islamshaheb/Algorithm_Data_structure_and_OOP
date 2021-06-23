#include<bits/stdc++.h>
using namespace std;
#define E "\n"

class A
{
    public:
        A()
        {
            cout<<"From Constructor A"<<E;
        }
        ~A()
        {
            cout<<"From Destructor A"<<E;
        }
};

class B : public A
{
    public:
        B()
        {
            cout<<"From Constructor B"<<E;
        }
        ~B()
        {
            cout<<"From Destructor B"<<E;
        }
};

class C : public B
{
    public:
        C()
        {
            cout<<"From Constructor C"<<E;
        }
        ~C()
        {
            cout<<"From Destructor C"<<E;
        }
};

int main()
{

    C b;
            /*
    Output of this program

    From Constructor A
    From Constructor B
    From Constructor C
    From Destructor C
    From Destructor B
    From Destructor A

    */
    return 0;
}
