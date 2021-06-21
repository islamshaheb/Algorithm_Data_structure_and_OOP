#include<iostream>
using namespace std;


main()
{
	int a = 10;

	//type has to same type what we are going to store
	int *ptr;
	ptr=&a;
	cout<<a<<" "<<*ptr<<" "<<ptr<<" "<<&a<<endl;
	// 10 10 0x6dfee8 0x6dfee8

	//Change a's value without using a
	*ptr=50;
	cout<<a<<" "<<*ptr<<" "<<ptr<<endl;
	// 50 50 0x6dfee8

	int *ptr1=ptr;

	//Pocharer Arithmetic (sum,minus,div,multiplication)
	// It will increment value 4 as the size of int is 4 bit
	// if we char then it would increment 1 as size of char is 1
	ptr++;
	cout<<ptr<<" increment "<<ptr-ptr1<<endl;

    cout<<"Array Start"<<endl;

	//Pointers Array
	int arr[]={2,4,5,6};

    cout<<*(arr)<<endl;//2
    cout<<*(arr+1)<<endl;//4
    cout<<*(arr+2)<<endl;//5....


    //we can write this using for loop also
    int *pntr=arr;
	cout<<*pntr<<endl;//2

	for(int i=0; i<sizeof(arr)/4; i++)
    {
        cout<<pntr<<" "<<*pntr<<endl;
        pntr++;
    }


    //Pointer to Pointers
    cout<<"\nPointer to Pointers\n";

    int var=10;
    int *pntr1=&var;
    cout<<&var<<endl;
    cout<<pntr1<<endl;//0x6dfec8
    cout<<&pntr1<<endl;//0x6dfec4


    int **pntr2=&pntr1;
    cout<<pntr2<<endl;//0x6dfec4
    cout<<*pntr2<<endl;//0x6dfec8
    cout<<**pntr2<<endl;//0x6dfec8







}
