#include<bits/stdc++.h>
using namespace std;
#define E "\n"

void permutation(string s, string permutate)
{
    if(s.length()==0)
    {
        cout<<permutate<<E;
        return;
    }
    for(int i=0; i<s.length(); i++)
    {
        //rest of the string
        string ros=s.substr(0,i)+s.substr(i+1);
        //Current Char
        char curc= s[i];
        permutation(ros,permutate+curc);
    }


}

int main()
{
    permutation("ABC","");
}



