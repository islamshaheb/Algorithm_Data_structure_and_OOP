#include<bits/stdc++.h>
using namespace std;
void permutation(string s,string fixed)
{
    int l=s.length();
    if(l==0)
    {
        cout<<fixed<<endl;
        return;
    }
    for(int i=0; i<l; i++)
    {
        string ros = s.substr(0,i)+s.substr(i+1);
        permutation(ros,fixed+s[i]);
    }
}

main()
{
    permutation("ABCDE","");
}
