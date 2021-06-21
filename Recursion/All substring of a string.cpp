#include<iostream>
using namespace std;


void substring(string actual,string answer)
{
    //cout<<actual<<"_"<<answer<<"_"<<endl;
    if(actual.length() == 0)
    {
        cout<<answer<<"\n";
        return;
    }
    char cur = actual[0];
    // rest of the string
    string ros = actual.substr(1);
    substring(ros,answer+cur);
    substring(ros,answer);
}

main()
{
    substring("ABC","");
    cout<<endl;
}
