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
void sort(node* head)
{
    node* temp=head;
    int c0=0,c1=0,c2=0;
    while(temp!=NULL)
    {
        if(temp->data==0) c0++;
        else if(temp->data==1) c1++;
        else c2++;
        temp=temp->next;
    }
    temp=head;
    for(int i=0;i<c0;i++)
    {
        temp->data=0;
        temp=temp->next;
    }
    for(int i=0;i<c1;i++)
    {
        temp->data=1;
        temp=temp->next;
    }
    for(int i=0;i<c2;i++)
    {
        temp->data=2;
        temp=temp->next;
    }
}
int main()
{
    node* head=NULL;
    insertathead(head,1);
    insertathead(head,0);
    insertathead(head,1);
    insertathead(head,2);
    insertathead(head,0);
    insertathead(head,1);
    print(head);
    sort(head);
    cout<<"\nsorted link list is :";
    print(head);
    return 0;
}