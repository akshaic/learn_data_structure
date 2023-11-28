#include<stdio.h>
#include<stdlib.h>


struct node{
     int data;
     struct node* next;
     struct node* prev;
};

struct node* head=NULL;
struct node* tail=NULL;
struct node* temp=NULL;

struct node* createnode(int data)
{
     struct node* newnode=(struct node*)malloc(sizeof(struct node));
     newnode->data=data;
     newnode->next=NULL;
     newnode->prev=NULL;
     return(newnode);
}

void insert(int data)
{
     struct node* newnode=createnode(data);
     if (head==NULL)
         {
         head=newnode;
         tail=newnode;
         }
     else
     {
     int choice;
     printf("Where do you want to insert :\n\t1.at front\n\t2.at end :");
     scanf("%d",&choice);
     if (choice==1)
     {
     newnode->next=head;
     head->prev=newnode;
     head=newnode;
     head->prev=tail;
     tail->next=head;
     }
     if (choice==2)
     {
     tail->next=newnode;
     newnode->prev=tail;
     tail=newnode;
     head->prev=tail;
     tail->next=head;
     }
}

}
void delete()
{
    if(head==NULL && tail==NULL)
    printf("List empty");
    else if (head==tail)
    {
    temp=head;
    head=NULL;
    tail=NULL;
    free(temp);
    printf("List is now empty\n");
    }
    else 
    {
     int choice;
     printf("Where do you want to delete :\n\t1.at front\n\t2.at end :");
     scanf("%d",&choice);
     if (choice==1)
     {
     temp=head;
     head=head->next;
     head->prev=tail;
     tail->next=head;
     free(temp);
     }
     if (choice==2)
     {
     temp=tail;
     tail=tail->prev;
     tail->next=head;
     head->prev=tail;
     
     }
}

}
void display()
{   
     if(head==NULL && tail==NULL)
    printf("List empty");
     temp=head;
    while(temp->next!=head)
      {
           printf("%d\t",temp->data);
           temp=temp->next;
      }
      printf("%d\t",tail->data);
      printf("\n\n");
}


void main()
{
int choice,data;
while(1)
{
       printf("Enter queue operation to perform :\n\t1.Enqueue\n\t2.Dequeue\n\t3.display\n\t4.exit\n");
       scanf("%d",&choice);
       if(choice==1)
       {
        printf("Enter element to Enqueue : ");
        scanf("%d",&data);
        insert(data);
        display();
       }
       else if(choice==2)
        {delete();display();}
       else if(choice==3)
       display();
       else
       break;
}
}  
     
     
     
     
     
     
     
     
     
     
     

     
     
     
     
     
     
     
     
     
