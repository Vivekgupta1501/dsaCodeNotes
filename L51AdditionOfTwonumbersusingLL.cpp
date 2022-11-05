#include<iostream>
#include "linklist.h"
using namespace std;
node* reverse(node* head)
{
    node* curr=head;
    node* prev=NULL;
    node* temp=NULL;
    while(curr!=NULL)
    {
        temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;

}
node* add(node* n1,node* n2)
{
    node* ans=NULL;
    n1=reverse(n1);
    n2=reverse(n2);
    int carry=0;
    int digit;
    node* ptr=n1;
    node* ptr2=n2;
    while(n2!=NULL||n1!=NULL)
    {
        int num1,num2;
        if(n1!=NULL) num1 =n1->data;
        else num1=0;
        if(n2!=NULL) num2= n2->data;
        else num2=0;
        int sum=num1+num2+carry;
        digit=sum%10;
        insertathead(ans,digit);
        sum=sum/10;
        carry=sum%10;
       if(n1!=NULL) n1=n1->next;
       if(n2!=NULL)n2=n2->next;
       if(n1==NULL && n2==NULL && carry!=0)
       {
        insertathead(ans,carry);
       }

    }
    return ans;
}
int main()
{
    node* n1=NULL;
    insertathead(n1,1);
    insertathead(n1,6);
    //insertathead(n1,1);
    //insertathead(n1,1);

    node* n2=NULL;
    //insertathead(n2,1);
    //insertathead(n2,1);
    insertathead(n2,8);
    node* ans=add(n1,n2);
    ans=reverse(ans);
    print(ans);
    return 0; 
}
