#include<iostream>
using namespace std;


string movechar(string s,char ch)
{

    if(!s.length())return "";
    char x = s[0];

    string temp = s.substr(1);
    string ans = movechar(temp, ch);

    if(ch == x) return ans+x;
    return x+ans;
}

main()
{

    cout<<movechar("xxxfsfxxdfdfdf",'x')<<endl;
}
