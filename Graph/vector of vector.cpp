#include<bits/stdc++.h>
using namespace std;

#define pb push_back

//vector<int>vec[10];
vector< vector<int> >vec;


int main()
{

int i,j=1,k=0;
for(i=0;i<5;i++)
{
    k=0;
    vector <int>temp;
    for(j=j;k<6;j++)
    {
        //vec[i].pb(j);
        temp.pb(j);
        k++;

    }
    vec.pb(temp);
}


for(i=0;i<vec.size();i++)
{
    for(j=1;j<vec[i].size();j++)
    {
        cout<<vec[i][j]<<" ";
    }
    cout<<endl;
}


   queue <int> q;
   //q.push(1);
   q.push(3);
   q.push(8);

   auto x=vec.begin();
   //std::cout<<*x;


}
