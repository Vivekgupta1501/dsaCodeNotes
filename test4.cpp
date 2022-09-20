#include<stdio.h>  
#include<stdlib.h>  
void beginsert(int); 
void display();
struct node  
{  
    int data;  
    struct node *next=NULL;  
};  
struct node *head;  
int main ()  
{  
    int choice,item;  
    do   
    {  
        printf("\nEnter the item which you want to insert?\n");  
        scanf("%d",&item);  
        beginsert(item);  
        printf("\nPress 0 to insert more ?\n");  
        scanf("%d",&choice);
        //display();
    }while(choice == 0);  
}  
void beginsert(int item)  
    {  
        struct node *ptr = (struct node *)malloc(sizeof(struct node *));  
        if(ptr == NULL)  
        {  
            printf("\nOVERFLOW\n");  
        }  
        else  
        {  
            ptr->data = item;  
            ptr->next = head;  
            head = ptr;  
            printf("\nNode inserted\n");  
        }  
          display();
    }  
    
    void display(struct node* head){
	struct node* temp;
	printf("The elements are");
	temp=head;
	while(temp!=NULL){
		printf("%d",temp->data);
		temp=temp->next;
	}
	printf("\n okk done");
}
