
#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)
#define fr1(k,l)for(int j=k; j<l; j++)
#define ll long long int
#define pb push_back
#define set(a) memset(a,-1,sizeof(a))
#define clr(a) memset(a,0,sizeof(a))
typedef vector <int> ve;
typedef vector <bool> vb;
ve vec[1001];
vb vis;

int colored[1001];
bool isbipartite(int u)
{

	queue <int> q;
	q.push(u);
	colored[u]=1;
	while(!q.empty())
	{
		int top=q.front();
		fr(0,vec[top].size())
		{
			int x=vec[top][i];
			if(colored[x]==-1)
			{
				q.push(x);
				colored[x]=1-colored[top];
			}
			else if(colored[i]!=-1 and colored[x]==colored[top])
				return 0;
		}
		q.pop();
	}
}

int main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	int node,edge;
	cin>>node>>edge;
	fr(0,edge)
	{
		int x,y;
		cin>>x>>y;
		vec[x].pb(y);
		vec[y].pb(x);
	}
	vis.assign(node+1,false);
	set(colored);
	fr(1,node+1)
	{
		if(colored[i]==-1)
			if(isbipartite(i))cout<<"YES\n";
			else cout<<"NO\n",exit(0);
	}

}




