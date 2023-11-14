#include<stdio.h>
int queue[5];
int front=-1;
int rear=-1;

void enq()
{
     int x;
     printf("Enter element to be added :");
     scanf("%d",&x);
     if ((rear+1)%5==front)
        {
         printf("Queue Full!!!");
        }
     else
        {
         if (front==-1 && rear==-1)
            { 
             front=0;
             rear=0;
             queue[rear]=x;
             }
         else
             rear=(rear+1)%5;
             queue[rear]=x;
         }
}

void deq()
{
    int value;
    if(rear==-1 && front==-1)
         printf("Queue Empty!!");
    else
       {
        value=queue[front];
        if (rear==front)
         {
          front=-1;
          rear=-1;
         }
        else
            front=(front+1)%5;
        }
}
  
  
  
void displayq()
{
    printf("The Queue is :");
    for (int i=front;i<=rear;i++)
        printf("%d\t",queue[i]);
    printf("\n\n");
}    


void main()
{
   int flag=1,choice=0;
   while(choice!=4)
   {
   printf("1. Enqueue\n 2. Dequeue\n3.Display Queue\n4.Exit\n Choose option :");
   scanf("%d",&choice); 
   switch(choice){
       case 1:{
             enq();
             displayq();
             break;}
       case 2:{
             deq();
             displayq();
             break;}
       case 3:{
             displayq();
             break;}
       case 4:
               break;
       default:{
             printf("Invalid input!!!");
             break;}
                  }
}
}
