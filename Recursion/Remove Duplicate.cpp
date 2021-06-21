#include<iostream>
#include<string.h>
using namespace std;


// recursion without return value
//void rec(string s)
//{
//    if(!s.length())return;
//    string temp = s.substr(1);
//    if(s[0] == temp[0])
//        rec(temp);
//    else
//    {
//        cout<<s[0]<<"";
//        rec(temp);
//    }
//}

// recursion with return value

string removeduplicate(string s)
{
    if(!s.length())return "";
    char ch = s[0];
    string temp = s.substr(1);
    string ret = removeduplicate(temp);
    cout<<ch<<"__ "<<temp<<" _"<<ret<<endl;
    if(ch == temp[0])return ret;
    return ch+ret;
}
main()
{
//    rec("aaabbbbcccdea");
    cout<<endl;
    string s  = removeduplicate("aaabbbbcccd");
//    cout<<s<<" "<<s.length()<<endl;
//    cout<<endl;
}
