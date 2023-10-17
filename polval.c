#include<stdio.h>

struct poly
{
  int coe;
  int pow;
};

int po(int x,int i)
{ int val=1;
while (i>0)
 {
 val = val*i;
 i--;
 }
 return val;
 }
 
 
 
void main()
{
int pow1,n1,x,sum =0 ,i;
 printf("Enter highest power and number of elements in polynomial 1 : ");
 scanf("%d %d",&pow1,&n1);
 struct poly p1[n1];
printf("Enter the first polynomial:");
 for(i=0;i<n1;i++)
 {
   printf("\nEnter the coeefficient and power of %d element ",i+1);
   scanf("%d %d",&p1[i].coe,&p1[i].pow);
 }
 printf("Entered polynomial is  :\n");
 for (i=0;i<n1;i++)
 {
  printf("%dx^%d\t",p1[i].coe,p1[i].pow);
 }
 printf("Enter value of x :");
 scanf("%d",&x);
 for (i=0;i<n1;i++)
 sum = sum + p1[i].coe * po(x,p1[i].pow);
 printf("The sum is %d",sum);
 }
 
 
 
 
 
 
 
 
 
 
