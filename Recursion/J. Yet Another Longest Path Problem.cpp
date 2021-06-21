#include<bits/stdc++.h>
using namespace std;
#define frr(frm,fornn)for(int i=frm; i<=fornn; i++)
#define rfrr(frm,fornn)for(int i=frm; i>=fornn; i--)
#define fr(iii,frm,fornn)for(int iii=frm; iii<=fornn; iii++)
#define rfr(iii,frm,fornn)for(int iii=frm; iii>=fornn; iii--)
#define itfr(iii,frm)for(auto iii=frm.begin(); iii!=frm.end(); iii++)
#define ll long long int
#define lll unsigned long long int
#define pb push_back
#define seet(seta) memset(seta,-1,sizeof(seta))
#define clr(seta) memset(seta,0,sizeof(seta))
#define clr2(seta,xxxx,yyyy) memset(seta,0,sizeof(int)*xxxx*yyyy)
#define seet2(seta,xxxx,yyyy) memset(seta,-1,sizeof(int)*xxxx*yyyy)
#define E "\n"
#define infi 10000000000000
#define F first
#define S second
#define pri1(qxt) cout<<qxt<<"\n";
#define pri2(qxt1,qxt2) cout<<qxt1<<" "<<qxt2<<"\n";
#define pri3(qxt1,qxt2,qxt3) cout<<qxt1<<" "<<qxt2<<" "<<qxt3<<"\n";
#define pri4(qxt1,qxt2,qxt3,qxt4) cout<<qxt1<<" "<<qxt2<<" "<<qxt3<<" "<<qxt4<<"\n";
typedef vector <int> ve;
typedef vector <bool> vb;
int cse=1;
#define mx 100003
void priarr(int qxt[],int to)
{
    for(int i=0;i<=to;i++)cout<<qxt[i]<<" ";
    pri1("\n");
}

ve vec[mx];
vb vis,dead;


void bfs(int cr)
{
    ///cout<<"HI there\n";
    queue<int> q;
    q.push(cr);

   //
    while(!q.empty())
    {

        int top=q.front();
      //  cout<<q.front()<<E;
        fr(i,0,vec[top].size()-1)
        {
            int cur=vec[top][i];

            if(!dead[cur] and vis[top])
            {
                cout<<cur<<" "<<top<<E;
            }
            else if(!dead[cur] and vis[cur])
            {
                cout<<top<<" "<<cur<<E;
            }
            else if(!dead[cur] and !vis[cur])
            {
                cout<<top<<" "<<cur<<endl;
                vis[cur]=1;
            }
            if(!dead[cur])q.push(cur);
        }
        dead[top]=1;
        q.pop();
    }
}
void solve()
{
    int n;
    cin>>n;
    fr(i,1,n-1)
    {
        int a,b;
        cin>>a>>b;
        vec[a].pb(b);
        vec[b].pb(a);
    }
    vis.assign(n+10,false);
    dead.assign(n+10,false);
    fr(i,1,n)
    {
        //cout<<"going "<<i<<E;
        if(!dead[i])
        {
            bfs(i);
        }

    }
    frr(1,mx){vec[i].clear();}
}

int main()
{
    //ios_base::sync_with_stdio(0);cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int tc;
    cin>>tc;
    while(tc--)
        solve();
}


