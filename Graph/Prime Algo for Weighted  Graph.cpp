#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair



vector<vector<pair<int,int> >>vec(100);
//vector<vector<pair<int,int>>>vec(8);
vector<bool> bol;

void make_graph(int n,int m,int wt)
{
    vec[n].pb(mp(m,wt));
   //if directed it will not work
    vec[m].pb(mp(n,wt));
}


void show_graph(int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<i<<"'s adjacent node :\n ";
        for(auto bx=vec[i].begin(); bx!=vec[i].end(); bx++)
        {
            int ax=bx->first;
            int ay=bx->second;

            cout<<ax<<" and its weight "<<ay<<endl;
        }
        cout<<endl;
    }

}


void Prime_MST()
{

}


int main()
{
    freopen("weighted.txt","r",stdin);
    int node,edge;
    cin>>node>>edge;
    cout<<node<<"__"<<edge<<endl;
    bol.assign(node,false);

    for(int i=0;i<edge;i++)
   {
       int cn,ad,wt;
       cin>>cn>>ad>>wt;
       cout<<cn<<" "<<ad<<" "<<wt<<endl;

       make_graph(cn,ad,wt);
    }


   show_graph(node);
   Prime_MST();

   return 0;

}
