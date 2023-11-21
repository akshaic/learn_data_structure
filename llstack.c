#include<stdio.h>
#include<stdlib.h>


struct node{
     int data;
     struct node* next;
};

struct node* head=NULL;
struct node* temp=NULL;

struct node* createnode(int data)
{
     struct node* newnode=(struct node*)malloc(sizeof(struct node));
     newnode->data=data;
     newnode->next=NULL;
     return(newnode);
}


void push(int data)
{
    struct node* newnode=createnode(data);
     if(head!=NULL)
          newnode->next=head;
     head=newnode;
}


void pop()
{
     if (head==NULL)
          printf("List empty!!!");
     else
         {
         temp=head;
         head=head->next;
         free(temp);
         }
}


void peek()
{
     if(head==NULL)
          printf("List empty!!!");
     else
         printf("The last inserted element is %d",head->data);
}


void display()
{   
     temp=head;
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
       printf("Enter stack operation to perform :\n\t1.push\n\t2.pop\n\t3.peek\n\t4.display\n\t5.exit\n");
       scanf("%d",&choice);
       if(choice==1)
       {
        printf("Enter element to push : ");
        scanf("%d",&data);
        push(data);
        display();
       }
       else if(choice==2)
        {pop();display();}
       else if(choice==3)
       peek();
       else if(choice==4)
       display();
       else
       break;
}
}             
      

