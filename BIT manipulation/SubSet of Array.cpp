#include<bits/stdc++.h>
using namespace std;


/// Find total number of subset in a set
/*

Lets see {a,b,c}
then total number of subset =
and Subset are:
{} -------->000
{c}-------->001
{b} ------->010
{b,c}------>011
{a} ------->100
{a,c} ----->101
{a,b} ----->110
{a,b,c}---->111

So this is can be solve using bit manipulation
*/
int subset(int n,char a[])
{
    for(int i= 0; i<(1<<n) ; i++)
    {
        cout<<"{ ";
        for(int j=0; j<3; j++)
        {
            if((i&(1<<j)))
            {
                cout<<a[j]<<" ";
            }
        }
        cout<<"}\n";
    }
}
main()
{
    char arr[]={'a','b','c'};
    cout<<subset(3,arr)<<endl;
}
