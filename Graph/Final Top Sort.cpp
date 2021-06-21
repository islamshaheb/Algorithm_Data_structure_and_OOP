
#include<bits/stdc++.h>
#include <auto_ptr.h>
using namespace std;

#define pb push_back
#define c cout
#define cc cin
#define e endl

//vector<int>vec[10];
// Current node = cn
// Current Adjacent node= an
// unvisited uv
vector<int> vec[100];
vector<bool> v;


int outdegree[100];
int indegree[100];

void make_graph(int n,int m)
{
    vec[n].pb(m);
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


void SetDegree(int y)
{

    for(auto x =vec[y].begin();  x!=vec[y].end(); x++)

    {
        outdegree[y]++;
        indegree[*x]++;
    }

}


void topsort(int n)
{

    for(auto i=vec[n].begin(); i!=vec[n].end();i++)
    {



        if(indegree[n]==0 && v[n]==false)
        {
            c<<n<<" ";
            v[n]=true;
        }

        if(indegree[*i]==0 && v[*i]==false)
        {
          c<<*i<<" ";
          v[*i]=true;
        }
        else
        {
            if(indegree[*i]!=0)
            indegree[*i]--;

        }



        if(indegree[*i]==0 and v[*i]==false)
        {
          c<<*i<<" ";
          v[*i]=true;
        }

    }

}


int test=0,node;

void startofsort()
{

  for(int i=1;i<=node;i++)
     {
         if(indegree[i]==0 && v[i]==false)
         {
             c<<i<<" ";
             v[i]=true;
             topsort(i);

         }


     }

    for(int i=1;i<=node;i++)
       {
           {
              topsort(i);
           }

       }

}



int main()
{
    freopen("input.txt","r",stdin);
    int edge;
    cin>>node>>edge;
    cout<<node<<"--"<<edge<<endl;
   v.assign(node+1,false);
//   vec.assign(node+1,vector<int>());

   for(int i=0;i<edge;i++)
   {
       int cn,ad;
       cin>>cn>>ad;
       cout<<cn<<" "<<ad<<endl;

       make_graph(cn,ad);
   }

   cout<<endl;
   show_graph(node);

   for(int i=1;i<=node;i++)
   {
         SetDegree(i);
   }

   cout <<"\n Degree of all nodes: \n";

   for(int i=1;i<=node;i++)
   {
         cout<<i<<"  outdegree  = "<<outdegree[i]<<"   indegree = ";
         cout<<indegree[i]<<endl;
   }
      c<<"Final top sort: ";
     startofsort();





}
