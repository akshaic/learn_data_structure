#include<stdio.h>
#include<stdlib.h>
struct node{
   int data;
   struct node* next;
};
struct node* head=NULL;

struct node* createnode(int data)
{
   struct node* newnode=(struct node*)malloc(sizeof(struct node));
   newnode->next=NULL;
   newnode->data=data;
   return newnode;
}

void addelement(int data)
{
    int choice,element;
    struct node* newnode=createnode(data);
    if (head==NULL)
    {
       head=newnode;
       head->next=NULL;}
    else
       {
        struct node* temp=head;
        printf("\nEnter choice :\n1.add at the end\n2.add after a particular element\n3.add before a particular element\n4.add at a particular position\n : ");
        scanf("%d",&choice);
        if (choice==1)
        {
        while (temp->next!=NULL)
             temp=temp->next;
        temp->next=newnode;
        }
        
        
        else if(choice==2)
        {
        printf("\nEnter the element after which new element is to be added : ");
        scanf("%d",&element);
        while (temp->data!=element)
              temp=temp->next;
        newnode->next=temp->next;
        temp->next=newnode;
        }
        
        
        
        else if(choice==3)
        {
        struct node* prvs=head;
        printf("\nEnter the element before which new element is to be added : ");
        scanf("%d",&element);
        while (temp->data!=element)
        {
              prvs=temp;
              temp=temp->next;
        }
        newnode->next=prvs->next;
        prvs->next=newnode;
        }
        
        
        else if(choice==4)
        {
        struct node* prvs=head;
        int pos;
        printf("\nEnter the position where new element is to be added : ");
        scanf("%d",&pos);
        for(int i=1;i<pos;i++)
              {prvs=temp;
              temp=temp->next;}
        newnode->next=temp;
        prvs->next=newnode;
        }
        }
}




void deleteelement()
{
    int choice,item;
    if (head==NULL)
       printf("List empty!!!");
    else
    {
    struct node* temp=head;
    struct node* prvs=head;
    printf("\n1.delete (value given)\n2.delete (position given)\n3.delete smallest element \n:");
    scanf("%d",&choice);
    if (choice==1)
    {
         printf("Enter value to be deleted :");
         scanf("%d",&item);
         while (temp->data!=item)
        {
              prvs=temp;
              temp=temp->next;
        }
        prvs->next=temp->next;
        free(temp);
    }
    
    
    else if (choice==2)
    { int pos;
         printf("Enter position of value to be deleted :");
         scanf("%d",&pos);
         for(int i=1;i<pos;i++)
              {prvs=temp;
              temp=temp->next;}
        prvs->next=temp->next;
        free(temp);
    }
    
    
    
    else if(choice==3)
    {
      int small=head->data; 
      while(temp!=NULL)
      {
        if(temp->data < small)
             small=temp->data;
       temp=temp->next;
       }
       temp=head;
     while (temp->data!=small)
        {
              prvs=temp;
              temp=temp->next;
        }
        prvs->next=temp->next;
        free(temp);
    }
         
    }
}
        
        
void display()
{
     if (head==NULL)
        printf("List is empty!!!");
     else
        {
         struct node* temp=head;
         while(temp!=NULL)
              {
              printf("%d\t",temp->data);
              temp=temp->next;}
        }
        printf("\n\n");
}


void main()
{ 
int data,c;
while(1)
{
printf("\n\n1.Add element\n2.Delete element\n3.Display list\n4.Exit :");
scanf("%d",&c);
if (c==1)
{
    printf("Enter element to be added :");
    scanf("%d",&data);
    addelement(data);
    display();
}    
else if(c==2)
{
    deleteelement();
}
else if (c==3)
display();
else if (c==4)
break;
}
}
          
         
       

