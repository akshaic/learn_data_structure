#include<stdio.h>
struct poly
{
  int coe;
  int pow;
};

void main()
{
 int pow1,n1,pow2,n2,i,j,k=0;
 printf("Enter highest power and number of elements in polynomial 1 : ");
 scanf("%d %d",&pow1,&n1);
 printf("Enter highest power and number of elements in polynomial 2 : ");
 scanf("%d %d",&pow2,&n2);
 struct poly p1[n1],p2[n2],p3[n1+n2];
 
 
 printf("Enter the first polynomial:");
 for(i=0;i<n1;i++)
 {
   printf("\nEnter the coeefficient and power of %d element ",i+1);
   scanf("%d %d",&p1[i].coe,&p1[i].pow);
 }
 
 
 printf("Enter the second polynomial:");
 for(i=0;i<n2;i++)
 {
   printf("\nEnter the coefficient and power of %d element ",i+1);
   scanf("%d %d",&p2[i].coe,&p2[i].pow);
 }
 
 i=0;j=0;
 while(i<=n1 && j<=n2)
  {
   if (p1[i].pow==p2[j].pow)
   {
   p3[k].coe=p1[i].coe+p2[j].coe;
   p3[k].pow=p1[i].pow;
   k++,i++,j++;
   }
   else if (p1[i].pow>p2[j].pow)
   {
   p3[k].coe= p1[i].coe;
   p3[k].pow=p1[i].pow;
   k++,i++;
   }
   else if (p1[i].pow<p2[j].pow)
   {
   p3[k].coe= p2[j].coe;
   p3[k].pow=p2[j].pow;
   k++,j++;
   }
   }
      
 for (i=0;i<k-1;i++)
 {
  printf("%dx^%d\t",p3[i].coe,p3[i].pow);
 }
} 
   
