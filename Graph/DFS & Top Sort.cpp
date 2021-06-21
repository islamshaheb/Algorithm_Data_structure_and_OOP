#include<bits/stdc++.h>
#define c cout
#define cc cin
#define e endl
#define pb push_back

using namespace std;

int node;
list<int> *vec;


//list<int> *adj;
//adj = new list<int>[V];

void makegraph(int n,int m)
{
    vec[n].push_back(m);
    //adj[v].push_back(w);
}


int dis[100],fin[100],x=0,t=0,last;
bool bol[100];



int DFS(int n)
{
     c<<e<<"n= "<<n<<e;
    //c<<"x1 = "<<x<<e;
    if(bol[n]==false)dis[n]=++x;

    bol[n]=true;
    int test=0;


    list <int>::iterator i;
    for( i=vec[n].begin(); i!=vec[n].end(); i++)
    {
        test++;
        int y=*i;
        //c<<"n= "<<n<<" y = "<<y<<e;
        c<<"*i "<<*i<<" ";

        if(bol[y]==false)dis[y]=++x;

        if(bol[*i]==false)
         {
             bol[*i]=true;
             t++;
             //c<<" y = "<<y<<" x= "<<x<<e;
             fin[y]=DFS(*i);
             //c<<" fin[y] = "<<fin[y]<<e;
             fin[y]=++x;
             //c<<" final fin[y] = "<<fin[y]<<e;

         }


    }

    c<<"|"<<e;


}

int main()
{

    int edge;
    freopen("DFS1.txt","r",stdin);

    cc>>node>>edge;
    int i;
    vec = new list<int>[edge+node];

    for(i=0;i<edge;i++)
    {
        int x,y;
        cc>>x>>y;
       c<<x<<" "<<y<<e;
        makegraph(x,y);
    }

    for(i=1;i<=node;i++)
    {
        if(bol[i]==false)
        {
           int mu=DFS(i);
           fin[node-t]=++mu;
        }

    }
     for(i=1;i<=node;i++)
    {
        c<<"i ="<<i<<" dis= "<<dis[i]<<" final= "<<fin[i]<<e;
    }


}
