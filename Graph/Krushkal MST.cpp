#include<bits/stdc++.h>
using namespace std;

#define c cout
#define cc cin
#define e endl
#define mx 100
#define V 9

//total weight
int tw=0;

typedef pair<int,int> iPair;
vector<pair<int ,iPair> > edge;

void make_graph(int a,int b,int w)
{
   edge.push_back({w,{b,a}});

}

int parent[mx];
int rnk[mx];


int disjointSet(int n)
{
    sort(edge.begin(),edge.end());

    for(int i=0;i<V;i++)
    {
        parent[i]=i;
        rnk[i]=0;
    }
}



int fnd(int u)
{
    if(parent[u]==u)
        return u;
    else
    {
        parent[u]=fnd(parent[u]);
        return parent[u];
    }
}


int makegraph(int u,int v)
{


    if(rnk[u]>rnk[v])parent[v]=u;
    else parent[u]=v;

    if(rnk[u]==rnk[v])
        rnk[v]++;
}


int KrushkalMst()
{
    disjointSet(V);
   vector<pair<int ,iPair> >::iterator xy;

    for( xy=edge.begin();xy!=edge.end();xy++)
    {

        int x=xy->second.first;
        int y=xy->second.second;


        int set_u=fnd(x);
        int set_v=fnd(y);
        if(set_u!=set_v)
        {
            c<<x<<"  "<<y<<e;

            tw+=xy->first;

            makegraph(set_u,set_v);
        }

    }
return tw;

}


int main()
{
    make_graph(0, 1, 4);
    make_graph(0, 7, 8);
    make_graph(1, 2, 8);
    make_graph(1, 7, 11);
    make_graph(2, 3, 7);
    make_graph(2, 8, 2);
    make_graph(2, 5, 4);
    make_graph(3, 4, 9);
    make_graph(3, 5, 14);
    make_graph(4, 5, 10);
    make_graph(5, 6, 2);
    make_graph(6, 7, 1);
    make_graph(6, 8, 6);

    int total_wt=KrushkalMst();
    c<<"\n\nTotal Weight "<<total_wt<<e;
}


