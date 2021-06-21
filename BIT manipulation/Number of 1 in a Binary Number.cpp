#include<bits/stdc++.h>
using namespace std;

int countone(int n)
{
    if(!n)return 0;
    return countone(n&(n-1))+1;

}

main()
{
    cout<<countone(5)<<endl;//2
    cout<<countone(7)<<endl;//3
    cout<<countone(15)<<endl;//4
    cout<<countone(255)<<endl;//8
    cout<<countone(0)<<endl;//0
}
