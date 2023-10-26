#include<stdio.h>
#define max_terms 100
int top1=-1;
int top2=-1;
int stack[max_terms];
int minstack[10];

void displaystack(int stack[],int top)
{ int i;
printf("The stack is : \n");
 for (i=0;i<top+1;i++)
  {printf("%d\t",stack[i]);}
}

void push()
{ 
int value;
  if (top1>=max_terms -1)
    printf("Stack Full!!");
  else
   {
    printf("Enter value to be pushed : ");
    scanf("%d",&value);
    stack[++top1]=value;
    if (top2==-1||value<minstack[top2])
        minstack[++top2]=value;
    else
       {}
   }
  displaystack(stack,top1); 
}



void main()
{ int choice;
printf("push elements to stack :");
push();
for (int i=1;i<max_terms;i++)
{
 printf("\nDo you want to push again (1/0) : ");
 scanf("%d",&choice);
 if (choice==1)
   push();
 else
  break;
}
printf("The minimum element : %d",minstack[top2]);

}
  

