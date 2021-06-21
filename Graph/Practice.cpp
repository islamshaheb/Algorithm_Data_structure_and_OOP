#include<bits/stdc++.h>

using namespace std;
int nn=0;
int test=0;
int ok(int n)
{
    if(nn>=10)return 0;
    if(test==0)
    for(int i=0;i<n;i++)
    {
        nn++;
        test++;
        cout<<"i= "<<i<<endl;
        if(i==2)
            ok(1);

    }
    cout<<"ojxdisd \\n";


}

int main()
{
    map <string,string>ma1;
    string s="st";

    ma1[s]="dd";
    cout<<ma1[s];


    int a[]={
    -45,56,5564454,565644
    };


    map <int,int> map1;


    int assign =0,com[100],c=0,n=sizeof(a)/sizeof(int);

   /* for(int i=0;i<n;i++)
    {
        int x=a[i];
        y=map1.end();
        cout<<y;

    }

  */


  vector <int> st[10];
  st[0].push_back(0);
  st[0].push_back(4);
  cout<<st[0][0];

 // for(int i=0;i<3;i++)
  ok(5);





}
