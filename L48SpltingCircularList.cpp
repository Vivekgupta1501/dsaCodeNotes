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
int main()
{
    node* head=NULL;
    insertathead(head,1);
    insertathead(head,2);
    insertathead(head,3);
    insertathead(head,4);
    insertathead(head,5);
    insertathead(head,6);
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=head;
    temp=head;
    int cnt=0;
    while(temp->next->data!=head->data)
    {
        temp=temp->next;
        cnt++;
    }
   int c1=cnt/2;
    int c2=cnt-c1;
    temp=head;
    while(c1)
    {
        temp=temp->next;
        c1--;
    }
    node* n2=temp->next;
    temp->next=head;
    temp=n2;
    while(c2)
    {
        temp=temp->next;
        c2--;
    }
    temp->next=n2;
    print(head);
    print(n2);
    return 0;

}