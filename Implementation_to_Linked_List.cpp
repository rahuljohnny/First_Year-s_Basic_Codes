#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next; //a node type structure
};

node* Head = NULL; //at first the pointer is null
void create(int val)
{
    node* nptr = new node; //initialization
    nptr->data = val;
    nptr->next=NULL;

    if(Head == NULL)
    {
        Head=nptr;
    }
    else
    {
        static node* tptr=Head;
        tptr->next=nptr; //telling tptr the address of nptr
        tptr=nptr;
    }
}

void print()
{
    cout<<"Current Linked List:"<<endl;
    node* tptr=Head;
    while(tptr!=NULL)
    {
        cout<<tptr->data<<"->";
        tptr=tptr->next;
    }
    cout<<endl;
}

void printadrs()
{
    cout<<"Current Adrss of the Linked List:"<<endl;
    node* tptr=Head;
    while(tptr!=NULL)
    {
        cout<<tptr->next<<"->";
        tptr=tptr->next;
    }
    cout<<endl;
}




int main()
{
    int n;
    while(cin>>n)
    {
         create(n);
         print();
         printadrs();
    }



}

