#include<stdio.h>
#include<stdlib.h>


struct node{
     int data;
     struct node* next;
};

struct node* front=NULL;
struct node* rear=NULL;
struct node* temp=NULL;

struct node* createnode(int data)
{
     struct node* newnode=(struct node*)malloc(sizeof(struct node));
     newnode->data=data;
     newnode->next=NULL;
     return(newnode);
}

void enq(int data)
{
     struct node* newnode=createnode(data);
     if (front==NULL && rear==NULL)
         {front=newnode;
         rear=newnode;
         }
     else
     {rear->next=newnode;
     rear=newnode;
     }}
     


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
    }
    else 
    {
    temp=front;
    front=front->next;
    free(temp);
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
        printf("Enter element to push : ");
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
      

