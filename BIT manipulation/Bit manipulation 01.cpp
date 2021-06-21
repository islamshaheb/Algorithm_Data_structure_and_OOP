//find bit
//set bit
//Reset(Unset bit)
//Update bit
#include<bits/stdc++.h>
using namespace std;


///find particular position's bit 0/1

int findbit(int n,int pos)
{
    return ((1<<pos)&n)!=0?1:0;
}

///Set bit of particular position (Make this position on)
int setbit(int n,int pos)
{
    return ((1<<pos)|n);
}
///Clear bit in this particular position (Unset bit)
int clearbit(int n,int pos)
{
    return ((~(1<<pos))&n);
}

///Update bit for particular position
int Updatebit(int n,int pos,int value)
{
    n=clearbit(n,pos);
    return ((value<<pos)|n);

}
main()
{
    ///find bit
    cout<<findbit(5,0)<<endl;//1
    cout<<findbit(5,1)<<endl;//0
    cout<<findbit(5,2)<<endl;//1

    ///set bit
    cout<<setbit(5,0)<<endl;//5
    cout<<setbit(5,1)<<endl;//7
    cout<<setbit(5,2)<<endl;//5
    cout<<setbit(5,3)<<endl;//13

    ///clear bit
    cout<<clearbit(5,0)<<endl;//4
    cout<<clearbit(5,1)<<endl;//5
    cout<<clearbit(5,2)<<endl;//1

    ///Update Bit
    cout<<Updatebit(5,0,0)<<endl;//4
    cout<<Updatebit(5,1,1)<<endl;//7
    cout<<Updatebit(5,2,0)<<endl;//1

}
