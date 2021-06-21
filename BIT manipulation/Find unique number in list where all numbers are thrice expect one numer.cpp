#include<bits/stdc++.h>
using namespace std;


int getbit(int n,int pos)
{
    return ((1<<pos)&n);
}
int setbit(int n,int pos)
{
    return ((1<<pos)|n);
}

int findunique(int arr[],int n)
{
    int res=0;
    for(int i=0; i<64; i++)
    {
        int sum=0;
        for(int j=0; j<n; j++)
        {
            sum+=getbit(arr[j],i);
        }
        if(sum%3!=0)
        {
            res = setbit(res,i);
        }
    }
    return res;

}

main()
{
    int arr[]={1,3,2,3,9,2,1,1,3,2};
    cout<<findunique(arr,10)<<endl;

}
