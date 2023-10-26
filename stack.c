#include<stdio.h>
#define max_terms 100
int top=-1;
int stack[max_terms];

void displaystack()
{ int i;
printf("The stack is : \n");
 for (i=0;i<top+1;i++)
  {printf("%d\t",stack[i]);}
}

 
void push()
{ 
int value;
  if (top>=max_terms -1)
    printf("Stack Full!!");
  else
   {
    printf("Enter value to be pushed : ");
    scanf("%d",&value);
    stack[++top]=value;
   }
  displaystack();
}



void pop()
{
if (top<0)
 printf("Stack empty!!");
else 
 top--;
displaystack();
}

void peek()
{
if (top<0)
 printf("Stack empty!!");
 else 
 printf("\n%d",stack[top]);

}
  
void main()
{
int stack[max_terms];
int choice;
top=-1;
while (1)
{
printf("\nChoose the stack operation to perform : \n\t 1. push \n\t 2.pop \n\t 3.peek\n\t 4. Display stack\n\t 5.Exit\n");
scanf("%d",&choice);
if (choice==1)
  push();
else if (choice==2)
    pop();
else if (choice==3)
   peek();
else if (choice==4)
    displaystack();
else if(choice==5)
  break;
else 
   printf("wrong input");
}
}
  
  
