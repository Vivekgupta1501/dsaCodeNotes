#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int value)
    {
        data=value;
        next=NULL;
    }
};
void insertathead(node* &head,int d)
{
    node* temp= new node(d);
    node* ptr=head;
    if(head==NULL)
    {
        head =temp;
    }
    else
    {
        while(ptr->next!=NULL)
        {
        ptr=ptr->next;
        }
    ptr->next=temp;
    }
}
void print(node* &head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}