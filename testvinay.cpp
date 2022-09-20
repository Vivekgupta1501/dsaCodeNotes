#include<iostream>
using namespace std;
class node{
    public:
  int data;
  node* next;
 
  node(int val){
      data=val;
     next=NULL;
  }
};

void get(int a[],int n){
   
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void insertatend(node* &head,int val){
    node* n = new node(val);
    node* temp=head;
    if(head==NULL)
    {
    	
        head=n;
        return;
    }
    while(temp->next!=NULL){
    	
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head){
   
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

void insertatpos(node* &head,int element,int loc){
 int i;
 node* d=new node(element);
 node* temp=head;
 for(i=1;i<loc;i++){
     temp = temp->next;
 }
 d->next=temp->next;
    temp->next=d;
}


int main(){
    int i,n,a[100];
    node* head=NULL;
    cout<<"Enter the lenth "<<endl;
    cin >>n;
   
    cout<<"Enter the elements"<<endl;
    //get(a,n);
    for(i=0;i<n;i++)
    {
    	int temp;
    	cin>>temp;
       insertatend(head,temp);
     
    }
    cout<<"fnfnsnf"<<endl;
   display(head);
    int element,loc;
    cout<<"Enter the location and element"<<endl;
    cin>>loc;
    cin>>element;
   
    insertatpos(head,element,loc);
    display(head);
    return 0;
   
    // first at end;
}

