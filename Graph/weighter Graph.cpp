#include<bits/stdc++.h>
#include <auto_ptr.h>
using namespace std;

#define pb push_back
#define mp make_pair

//vector<int>vec[10];
// Current node = cn
// Current Adjacent node= an
// unvisited uv
vector<vector<pair<int,int> >>vec(8);
vector<bool>v;

void make_graph(int n,int m,int o)
{
    vec[n].pb(mp(m,o));
   //if directed it will not work
    vec[m].pb(mp(n,o));
}


void show_graph(int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<i<<"'s adjacent node : \n";
        for(auto bx=vec[i].begin(); bx!=vec[i].end(); bx++)
        {
            cout<<bx->first<<" with weight "<<bx->second<<endl;
        }
        cout<<endl;
        cout<<endl;
    }

}


int main()
{
    freopen("weighted.txt","r",stdin);
    int node,edge;
    cin>>node>>edge;
    cout<<"ff "<<node<<"--"<<edge<<endl;
   v.assign(node,false);
//   vec.assign(node,vector<int>());

   for(int i=0;i<edge;i++)
   {
       int cn,ad,wt;
       cin>>cn>>ad>>wt;
       cout<<cn<<" "<<ad<<" "<<wt<<endl;

       make_graph(cn,ad,wt);
   }


   show_graph(node);




}

