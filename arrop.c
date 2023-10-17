#include<stdio.h>
void main()
{
int i,arr[100],c,n,l,ne,e,p;
printf("enter array size :");
scanf("%d",&n);
printf("enter array elements : ");
for (i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("\n choose operation \n 1.insertion \n2. search \n3.delete element\nchoose any : ");
scanf("%d",&c);
if (c==1)
{
printf("Enter element to be inserted");
scanf("%d",&ne);
arr[n]=ne;
printf("updated array is ");
for (i=0;i<n+1;i++)
printf("%d",arr[i]);
}
if (c==2)
printf("Enter element to be searched");
scanf("%d",&e);
for (i=0;i<n;i++)
{if (arr[i]==e)
 printf("element found at %d",i);
}
if (c==3)
{
printf("enter position of element to be deleted");
scanf("%d",&p);
arr[p]=0;
printf("updated array is ");
for (i=0;i<n+1;i++)
printf("%d",arr[i]);
}

}


