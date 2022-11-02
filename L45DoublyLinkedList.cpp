#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int d)
    {
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }

};
void insertAthead(Node* &head,int d)
{
    Node* temp= new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void print(Node* head)
{
    Node* temp;
    temp=head;
    while(temp->next!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<" REVERSE ITERATION "<<endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->prev;
    }
}
int main()
{
    Node* n1= new Node(0);
    Node* head=n1;
    insertAthead(head,2);
    insertAthead(head,3);
    insertAthead(head,4);
    insertAthead(head,5);
    print(head);
    return 0;
}