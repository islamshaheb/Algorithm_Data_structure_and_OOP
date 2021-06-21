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



int DFS(int n,int source)
{

    if(bol[n]==false)dis[n]=++x;

    bol[n]=true;



    list <int>::iterator i;
    for( i=vec[n].begin(); i!=vec[n].end(); i++)
    {

        int y=*i;

        if(bol[y]==false)dis[y]=++x;

        if(bol[*i]==false)
         {
             bol[*i]=true;


             fin[y]=DFS(*i,source);

             fin[y]=++x;


         }


    }

    return source;

    c<<"|"<<e;


}

int main()
{

    int edge;
    freopen("DFS2.txt","r",stdin);

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
           int mu=DFS(i,i);
           fin[mu]=++x;
        }

    }

    int temp[node];

     for(i=1;i<=node;i++)
    {
        temp[i]=i;
        c<<"node "<<i<<" discovery_time= "<<dis[i]<<"  final_time= "<<fin[i]<<e;
    }

    int j;

   for (j=1 ; j<=(node) ; j++)
	{
	    //int x=0;
		for (i=1 ; i<=(node) ; i++)
		{

		      int x=fin[i];
			if (fin[i]>fin[i+1] )
			{
			    //if(x==0)
			   x=fin[i];
			       c<<i<<" "<<fin[i]<<" |..";

			    if(fin[i+1]<x)
                {
                  temp[j]=i;
			      c<<i<<" ____i\n";
                }


				x = fin[i];
				fin[i] = fin[i + 1];
				fin[i + 1] = x;
			}
		}
		c<<" j "<<j<<e<<e<<e;
	}

    c<<"top sort :";
     for(i=1;i<=node;i++)
    {
        c<<temp[i]<<" ";
    }


}
