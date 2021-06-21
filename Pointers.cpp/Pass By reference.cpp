#include<iostream>
using namespace std;


//swap two value using references
void swp(int *x,int *y)
{
    int temp=*y;
    *y=*x;
    *x=temp;

}
main()
{
    int a=10,b=30;
    swap(a,b);
    cout<<a<<" "<<b<<endl;

    //Other way to do it using pass by references
    swp(&a,&b);
    cout<<a<<" "<<b<<endl;

    //we can call it as other way too
    int* ptr1=&a,*ptr2=&b;
    swp(ptr1,ptr2);
    cout<<a<<" "<<b<<endl;
}
