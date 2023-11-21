#include<stdio.h>
#include<stdlib.h>


struct node{
     int coef;
     int exp;
     struct node* next;
};

struct node* p1=NULL;
struct node* p2=NULL;
struct node* result=NULL;
struct node* h1=NULL;
struct node* h2=NULL;
struct node* hr=NULL;


struct node* createnode(int data)
{
     struct node* newnode=(struct node*)malloc(sizeof(struct node));
     newnode->data=data;
     newnode->next=NULL;
     return(newnode);
}

void readpoly(struct node* p)
{


