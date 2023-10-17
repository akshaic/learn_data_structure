#include<stdio.h>
struct student
{
 int rn;
 int m1;
 int m2;
 int m3;
 int m4;
 int m5;
 int total;
 }s[50],temp;

 
 void main()
 {
 int n,i,j,total;
 printf("Enter number of students : ");
 scanf("%d",&n);
 for (i=0;i<n;i++)
  {
   s[i].rn=i+1;
   printf("Enter mark of subject 1 :");
   scanf("%d",&s[i].m1);
   printf("Enter mark of subject 2 :");
   scanf("%d",&s[i].m2);
   printf("Enter mark of subject 3 :");
   scanf("%d",&s[i].m3);
   printf("Enter mark of subject 4 :");
   scanf("%d",&s[i].m4);
   printf("Enter mark of subject 5 :");
   scanf("%d",&s[i].m5);
   s[i].total=s[i].m1+s[i].m2+s[i].m3+s[i].m4+s[i].m5;
  }
  for (i=0;i<n;i++)
  {
   for (j=0;j<n-i-1;j++)
    {
     if (s[j].total > s[j+1].total)
     {
      temp=s[j];
      s[j]=s[j+1];
      s[j+1]=temp;
      }
     }
    }
    printf("\n\nThe sorted array is : \n");
    for (i=0;i<n;i++)
    {
     printf("Roll No. : %d\n",s[i].rn);
     printf("subject 1 : %d\n",s[i].m1);
     printf("subject 2 : %d\n",s[i].m2);
     printf("subject 3 : %d\n",s[i].m3);
     printf("subject 4 : %d\n",s[i].m4);
     printf("subject 5 : %d\n",s[i].m5);
     printf("total : %d\n\n\n",s[i].total);
     }
}
   
   
   
   
   
   
   
   
   
   
   
   
   
