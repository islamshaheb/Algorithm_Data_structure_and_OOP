#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int x)
        {
            data=x;
            left=NULL;
            right=NULL;
        }
};

Node* insertelement(Node* temp,int data)
{
    if(temp==NULL)return new Node(data);
    else if(data<temp->data)temp->left=insertelement(temp->left,data);
    else temp->right=insertelement(temp->right,data);
    return temp;
}

void inordertraversal(Node* head)
{
    if(head==NULL)return;
    cout<<head->data<<endl;
    inordertraversal(head->left);
    inordertraversal(head->right);
}

main()
{
    Node* head=NULL;
    head=insertelement(head,12);
    head=insertelement(head,17);
    head=insertelement(head,3);
    head=insertelement(head,0);
    head=insertelement(head,23);
    head=insertelement(head,5);
    head=insertelement(head,11);

    //Display the Tree
    inordertraversal(head);



}
