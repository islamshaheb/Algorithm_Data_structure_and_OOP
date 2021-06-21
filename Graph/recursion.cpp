#include<bits/stdc++.h>
using namespace std;
#define c cout
#define cc cin
int n=5;
int a[10],az[10];
int z=0,y=0;
 int rec(int x)
 {


     if(n==a[z])
     {
         c<<n<<" ok\n";
         return z;
     }
    else
        {
         c<<"else "<<a[z]<<endl;
         z++;
         y++;
         c<<"before az "<<az[y]<<" y ="<<y<<endl;
         az[y]=rec(a[z]);
         c<<"after   0.az "<<az[y]<<" y ="<<y<<endl;

        return az[y] ;
       }
 }


int main()
{

    for(int i=0;i<10;i++)
    {
        a[i]=i;

    }


    for(int i=0;i<10;i++)
    {
        cout<<i<<endl;

    }

    int ans=rec(n);
    cout<<"Position "<<ans<<endl;

    for(int i=0;i<10;i++)
    {
        cout<<az[i]<<" the last" <<" y="<<i<<endl;

    }
}
