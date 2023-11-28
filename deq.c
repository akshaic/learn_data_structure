#include<stdio.h>
#include<stdlib.h>


struct node{
     int data;
     struct node* next;
     struct node* prev;
};

struct node* front=NULL;
struct node* rear=NULL;
struct node* temp=NULL;

struct node* createnode(int data)
{
     struct node* newnode=(struct node*)malloc(sizeof(struct node));
     newnode->data=data;
     newnode->next=NULL;
     newnode->prev=NULL;
     return(newnode);
}

void enq(int data)
{
     struct node* newnode=createnode(data);
     if (front==NULL && rear==NULL)
         {
         front=newnode;
         rear=newnode;
         }
     else
     {
     int choice;
      printf("Where do you want to Enqueue :\n\t1.at front\n\t2.at rear : ");
      scanf("%d",&choice);
      if (choice==1)
      {
       front->prev=newnode;
       newnode->next=front;
       front=newnode;    
      }
      if (choice==2)
      {
       rear->next=newnode;
       newnode->prev=rear;
       rear=newnode;    
      }
     }
}


void deq()
{
    if(front==NULL && rear==NULL)
    printf("List empty");
    else if (front==rear)
    {
    temp=front;
    front=NULL;
    rear=NULL;
    free(temp);
    printf("List is now empty");
    }
    else 
    {
    int choice;
    printf("Where do you want to Dequeue\n\t1.from front\n\t2.from rear : ");
    scanf("%d",&choice);
    if (choice==1)
    {
    temp=front;
    front=front->next;
    front->prev=NULL;
    free(temp);
    }
    if (choice==2)
    {
    temp=rear;
    rear=rear->prev;
    rear->next=NULL;
    free(temp);
    }
    }
}

void display()
{   
     if(front==NULL && rear==NULL)
    printf("List empty");
     temp=front;
     while(temp!=NULL)
      {
           printf("%d\t",temp->data);
           temp=temp->next;
      }
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
        enq(data);
        display();
       }
       else if(choice==2)
        {deq();display();}
       else if(choice==3)
       display();
       else
       break;
}
}             
     
    
   
     
     
     
     
     
     
     
