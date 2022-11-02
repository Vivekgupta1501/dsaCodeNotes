#include<iostream>
#include<map>
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
void removeDuplicate(node* head)     //first appproach using maps second approach can be done using two loops 
{
    map<int,bool> visited;
    node* temp=head;
    node* prev=temp;
    while(temp!=NULL)
    {
        if(visited[temp->data]==1)
        {
            //cout<<"if"<<endl;
            prev->next=prev->next->next;
            delete temp;
            temp=prev->next;
        
        }
         else 
         {
           // cout<<"else"<<endl;
            visited[temp->data]=1;
            prev=temp;
            temp=temp->next;
         }
         
    }
}
int main()
{
    node* head=NULL;
    insertathead(head,4);
    insertathead(head,3);
    insertathead(head,4);
    removeDuplicate(head);
    print(head);
    return 0;

}