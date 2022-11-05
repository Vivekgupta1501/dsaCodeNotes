#include<iostream>
#include "linklist.h"
/* algoritm :
1.find the middle point of the link list
2. revrse the second half of the link list 
3. compare both the halfs now
*/
node* midpoint(node* head)
{
    node* slow=head;
    node* fast=head->next;
    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
            //fast=fast->next;
        
        slow=slow->next;
    }
    return slow;
}
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
bool ispalindrome(node* head)
{
    node* mid=midpoint(head); //1.finding the midpoint
    node* temp=mid->next;
    mid->next=reverse(temp);  //2. reverse of the second half
    //cout<<mid->data;
    //node* temp2=mid->next;
   // print(head);
    node* head1=head;
    node* head2=mid->next;
    
    while(head2!=NULL)
    {
        if(head1->data!=head2->data)
        {
            return false;
        }
        else
        {
             head1=head1->next;
             head2=head2->next;  
        }
    }
    temp=mid->next;
    mid->next=reverse(temp);
    return true;
}
int main()
{
    node* head=NULL;
    insertathead(head,1);
    insertathead(head,2);
    insertathead(head,2);
    insertathead(head,2);
    //insertathead(head,3);
    insertathead(head,1);
    if(ispalindrome(head))
    {
        cout<<"\nLink list is a palindrome\n";
    }
    else cout<<"\nLink list is not a palindrome\n";
    return 0;
}
