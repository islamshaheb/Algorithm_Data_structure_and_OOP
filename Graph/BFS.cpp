#include<bits/stdc++.h>
#include <auto_ptr.h>
using namespace std;

#define pb push_back

//vector<int>vec[10];
// Current node = cn
// Current Adjacent node= an
// unvisited uv
vector<int> vec[100];
vector<bool>v;

void make_graph(int n,int m)
{
    vec[n].pb(m);
   //if directed it will not work
    vec[m].pb(n);
}


void show_graph(int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<i<<"'s adjacent node : ";
        for(auto bx=vec[i].begin(); bx!=vec[i].end(); bx++)
        {
            cout<<*bx<<" ";
        }
        cout<<endl;
    }

}


void bfs(int uv)
{
    queue<int>q;

    q.push(uv);
    v[uv]=true;

    while(!q.empty())
    {
    int y=q.front();
    cout<<y<<"  ";


    for(auto x =vec[y].begin();  x!=vec[y].end(); x++)

    {
        if(!v[*x])
        {
            v[*x]=true;
            q.push(*x);
        }

    }
    q.pop();

    }



}


int main()
{
    freopen("input.txt","r",stdin);
    int node,edge;
    cin>>node>>edge;
    cout<<"ff "<<node<<"--"<<edge<<endl;
   v.assign(node,false);
//   vec.assign(node,vector<int>());

   for(int i=0;i<edge;i++)
   {
       int cn,ad;
       cin>>cn>>ad;
       cout<<cn<<" "<<ad<<endl;

       make_graph(cn,ad);
   }


   show_graph(node);

   for(int i=1;i<=node;i++)
   {
       if(!v[i])
         bfs(i);
   }





}
