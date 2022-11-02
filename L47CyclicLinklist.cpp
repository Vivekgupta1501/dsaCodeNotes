#include<iostream>
#include<map>
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
bool iscyclic(node* &head)  //appoach 1: using maps
{
    if(head==NULL)
    {
        return false;
    }
    map<node*,bool> visited;
    node* temp=head;
    while(temp!=NULL)
    {
        if(visited[temp]==true)
        {
            return 1;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return 0;
}
node* flyoddetectloop(node* &head)
{
    if(head==NULL)
    {
        return 0;
    }
    node* slow=head;
    node* fast=head;
    while(slow!=NULL && fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
        }
        slow=slow->next;
        if(slow==fast) return slow;
    }
    return 0;

}
node* getStartingNode(node* head)
{
    if(head==NULL) return NULL;
    node* intersection= flyoddetectloop(head);
    node* slow=head;
    while(slow!=intersection)
    {
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}
void removeloop(node* head)
{
    if(head==NULL) return;
    node* startofloop=getStartingNode(head);
    node* temp=startofloop;
    while(temp->next!=startofloop)
    {
        temp=temp->next;
    }
    temp->next=NULL;
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
   insertathead(head,7);
   node* ptr=head;
   while(ptr->next!=NULL)
   {
    ptr=ptr->next;
   }
  ptr->next=head->next;         //linking last node to the second ode for creating a cycle 
   // print(head);
   if(flyoddetectloop(head))
   {
    cout<<"\ncycle is prsent\n";

   }
   else 
   {
    cout<<"\ncycle is not present\n";
   }  
   node* temp=getStartingNode(head);
   cout<<temp->data;

//REMOVE OF LOOP
removeloop(head);
if(flyoddetectloop(head))
   {
    cout<<"\ncycle is prsent\n";

   }
   else 
   {
    cout<<"\ncycle is not present\n";
   } 
    return 0;

}