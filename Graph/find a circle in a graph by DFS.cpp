#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)
#define fr1(k,l)for(int j=k; j<l; j++)
#define ll long long int
#define pb push_back
#define set(a) memset(a,-1,sizeof(a))
#define clr(a) memset(a,0,sizeof(a))
typedef vector <int> ve;
ve vec[1001];
vector <bool> vis;
vector <bool> circle;

int child[10000];
int t;
void cir(int u)
{
	//cout<<t<<endl;
//	if(u==first and t!=0)return;
	t++;
//	cout<<u<<"_"<<child[u]<<"_"<<t<<",";
//	fr(0,4)
//		cout<<i<<" "<<child[i]<<endl;
	if(!circle[u] or t==1)
		circle[u]=true,cir(child[u]);
//	fr(0,4)
//	cout<<i<<" "<<child[i]<<endl;
}

void dfs(int u)
{
	//if(!vis[u])
		//cout<<u<<" ";

	vis[u]=1;
	fr(0,vec[u].size())
	{
		int x=vec[u][i];
		if(!vis[x])
			child[u]=x;
		if(vis[x] and child[x]!=u)
			t=0,cir(x);
		if(!vis[x])
			dfs(x);
	}
}

main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	int node,edge;
	cin>>node>>edge;
	fr(0,edge)
	{
		int u,v;
		cin>>u>>v;
		vec[u].pb(v);
		vec[v].pb(u);
	}
	vis.assign(node+1,false);
	circle.assign(node+1,false);
	fr(1,node+1)
	{
		if(!vis[i])dfs(i);
	}

	ve ans,ans1;
	int x=0;
	fr(1,node+1)
	{
		if(!circle[i])
		{
			if(!x)ans.pb(i),x=1;
			else ans1.pb(i),x=0;
		}
	}
	if(!ans.size())cout<<-1<<endl;
	else
	{
		cout<<ans.size()<<endl;
		fr(0,ans.size())cout<<ans[i]<<" ";
		cout<<endl;

		cout<<ans1.size()<<endl;
		fr(0,ans1.size())cout<<ans1[i]<<" ";
		cout<<endl;
	}
}


