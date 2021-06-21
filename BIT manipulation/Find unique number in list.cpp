#include<bits/stdc++.h>
using namespace std;

int findunique(int a[],int n)
{
    int xxor=0;
    for(int i=0; i<n; i++)
    {
        xxor=xxor^a[i];
        //cout<<xxor<<endl;
    }
    return xxor;
}

main()
{
    int arr[6]={7,8,2,8,5,3};
    cout<<findunique(arr,6)<<endl;//2

}
