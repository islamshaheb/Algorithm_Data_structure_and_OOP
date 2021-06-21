#include<bits/stdc++.h>
using namespace std;

int countpath(int start,int last)
{
    if(start>last)return 0;
    if(start==last)return 1;
    int cnt=0;
    for(int i=1; i<=6; i++)
        cnt+=countpath(start+i,last);
    return cnt;
}

int main()
{
    cout<<countpath(0,4)<<endl;//8
    cout<<countpath(0,3)<<endl;//6
    cout<<countpath(0,10)<<endl;//492
    cout<<countpath(0,20)<<endl;//463968
}
