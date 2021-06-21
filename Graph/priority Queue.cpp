#include<bits/stdc++.h>
using namespace std;
#define c cout
#define cc cin
#define e endl

int main()
{
    priority_queue <int,vector<int>,greater<int>> pq;

    pq.push(3);
    pq.push(13);
    pq.push(56);
    pq.push(89);
    pq.push(456);
    pq.push(1);



    while(!pq.empty())
    {
     c<< pq.top()<<e;
     pq.pop();
    }

}
