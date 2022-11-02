#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int value)
    {
        data=value;
        next=NULL;
    }
    
};
void insertatHead(Node* &head,int d)
{
    Node* temp= new Node(d);
    if(head==NULL)
    {
        head=temp;
        return;
    }
    head->next=temp;
    head=temp;

}
void print(Node* &head)
{
    Node* temp;
    temp=head;
    while(temp!=NULL)
    {cout<<temp->data<<endl;
    temp=temp->next;
    }
}

int main()
{
// Node* n1=new Node(5);
// cout<<n1->data<<endl;
// cout<<n1->next<<endl;
Node* head=NULL;
insertatHead(head,5);
insertatHead(head,4);
print(head);

    return 0;

}