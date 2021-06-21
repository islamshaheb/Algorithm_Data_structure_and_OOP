#include<bits/stdc++.h>
using namespace std;

string check(int n)
{
    // if n=0 then we have to return false
    //other wise find immediate 1 less number and perform and operation
    // if result is zero this is power of two other wise not
    return (n && (n&(n-1)))==0?" Power of two":" Not power of two";
}

main()
{
    cout<<10<<check(10)<<endl;
    cout<<16<<check(16)<<endl;
    cout<<32<<check(32)<<endl;
    cout<<60<<check(60)<<endl;
}
