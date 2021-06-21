#include<bits/stdc++.h>
#define fr(iii,iit,iin) for(int iii = iit; iii <= iinl; iii++)
#define E "\n"
void towerofhanoi(int n, char src, char helper, char dest)
{
    if(n==0)return;
    towerofhanoi(n-1,src,dest,helper);
    std::cout<<"Going "<<src<<" to "<<dest<<E;
    towerofhanoi(n-1,helper,src,dest);
}

main()
{
    towerofhanoi(3,'A','B','C');
}
