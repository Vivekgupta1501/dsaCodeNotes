#include<iostream>
using namespace std;
class node
{
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
    
    node* temp = new node(d);
    node* ptr=head;
    if(head==NULL)
    {
        head=temp;
        return;
    }
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
}
void print(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void deletReapeated(node* head)
{
    node* current=head;
    while(current->next!=NULL)
    {
        if(current->data==current->next->data)
        {
            node* temp= current->next;
            current->next=current->next->next;
            delete temp;
        }
        else
        current=current->next;
    }
}
int main()
{
    node* head=NULL;
    insertathead(head,3);
    insertathead(head,8);
   // insertathead(head,5);
    insertathead(head,9);
    insertathead(head,-1);
    /*insertathead(head,-1);*/

    /*insertathead(head,3);
    insertathead(head,3);
    insertathead(head,3);
    insertathead(head,3);
    insertathead(head,3);
    insertathead(head,4);
    */deletReapeated(head);
    print(head);


    return 0;
}