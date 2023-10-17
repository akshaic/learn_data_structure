#include<stdio.h>
void main()
{
int n1,n2,i,j;
printf("Enter number of non zero elements of sparse matrix 1 : ");
scanf("%d",n1);
printf("Enter number of non zero elements of sparse matrix 2 : ");
scanf("%d",n2);
int s1[n1+1][3];
int s2[n2+1][3];
printf("Enter triplet representation of matrix 1 : ");
for (i=0;i<n1+1;i++)
{
  for (j=0;j<3;j++)
    scanf("%d",&arr[i][j]);
}
printf("Enter triplet representation of matrix 2 : ");
for (i=0;i<n2+1;i++)
{
  for (j=0;j<3;j++)
    scanf("%d",&arr[i][j]);
}


